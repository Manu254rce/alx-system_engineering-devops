file { '/home/vagrant/.ssh/config':
  ensure => file,
  owner => 'vagrant',
  group => 'vagrant',
  mode   => '0600',
}

file_line { 'Turn off passwd auth':
  path => '/home/vagrant/.ssh/config',
  line => 'PasswordAuthentication no',
  match => '^PasswordAuthentication',
}

file_line { 'Declare identity file':
  path => '/home/vagrant/.ssh/config',
  line => 'IdentityFile ~/.ssh/school',
  match => '^IdentityFile',
}

