// rea decompile_all
// name: FUN_1006b67ec
// address: 0x1006b67ec
// body: available
// range: 0x1006b67ec-0x1006b697f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1006b67ec(int param_1)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  
  if (param_1 < 400) {
    uVar2 = 0x1f0000000a;
    switch(param_1) {
    case 100:
      return ZEXT816(0x16fffe0000) << 0x40;
    case 0x65:
switchD_1006b6820_caseD_65:
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar2;
      return auVar1 << 0x40;
    case 0x66:
    case 0x67:
    case 0xa1:
      return ZEXT816(0x1e00000006) << 0x40;
    case 0x68:
      return ZEXT816(0x1e00000001) << 0x40;
    case 0x69:
      return ZEXT816(0x700000003) << 0x40;
    case 0x6a:
      return ZEXT816(0x2000000000000) << 0x40;
    case 0x6b:
      return ZEXT816(0x900000001) << 0x40;
    case 0x6c:
    case 0x6d:
    case 0x6e:
    case 0x6f:
    case 0x70:
    case 0x71:
    case 0x72:
    case 0x73:
    case 0x74:
    case 0x75:
    case 0x76:
    case 0x77:
    case 0x78:
    case 0x79:
    case 0x7a:
    case 0x7b:
    case 0x7c:
    case 0x7d:
    case 0x7e:
    case 0x7f:
    case 0x80:
    case 0x81:
    case 0x82:
    case 0x83:
    case 0x84:
    case 0x85:
    case 0x86:
    case 0x87:
    case 0x88:
    case 0x89:
    case 0x8a:
    case 0x8b:
    case 0x8c:
    case 0x8d:
    case 0x8e:
    case 0x8f:
    case 0x90:
    case 0x91:
    case 0x92:
    case 0x93:
    case 0x94:
    case 0x95:
    case 0x96:
    case 0x97:
    case 0x98:
    case 0x99:
    case 0x9a:
    case 0x9b:
    case 0x9c:
    case 0x9d:
    case 0x9e:
    case 0x9f:
    case 0xa5:
    case 0xa6:
    case 0xa7:
    case 0xa8:
    case 0xa9:
    case 0xaa:
    case 0xab:
    case 0xac:
    case 0xad:
    case 0xae:
    case 0xaf:
    case 0xb0:
    case 0xb1:
    case 0xb2:
    case 0xb3:
    case 0xb4:
    case 0xb5:
    case 0xb6:
    case 0xb7:
    case 0xb8:
    case 0xb9:
    case 0xba:
    case 0xbb:
    case 0xbc:
    case 0xbd:
    case 0xbe:
    case 0xbf:
    case 0xc0:
    case 0xc1:
    case 0xc2:
    case 0xc3:
    case 0xc4:
    case 0xc5:
    case 0xc6:
    case 199:
      break;
    case 0xa0:
    case 200:
    case 0xc9:
    case 0xca:
switchD_1006b6820_caseD_a0:
      return ZEXT816(0x100000000) << 0x40;
    case 0xa2:
      return ZEXT816(0x100000000004) << 0x40;
    case 0xa3:
      return ZEXT816(0x800000001) << 0x40;
    case 0xa4:
      return ZEXT816(0x1900000000) << 0x40;
    default:
      if (param_1 == 10) goto switchD_1006b6820_caseD_a0;
    }
  }
  else if (param_1 < 1000) {
    if (param_1 < 0x192) {
      if ((param_1 == 400) || (param_1 == 0x191)) {
        return ZEXT816(0);
      }
    }
    else {
      if (param_1 == 0x192) {
        return ZEXT816(0x900000000) << 0x40;
      }
      if (param_1 == 500) goto switchD_1006b6820_caseD_a0;
    }
  }
  else if (param_1 < 0x3ea) {
    if (param_1 == 1000) goto switchD_1006b6820_caseD_a0;
    if (param_1 == 0x3e9) {
      return ZEXT816(0x300000000) << 0x40;
    }
  }
  else {
    if (param_1 == 0x3ea) {
      return ZEXT816(0x200000000) << 0x40;
    }
    if (param_1 == 0x3eb) {
      uVar2 = 0x2000000000040;
      goto switchD_1006b6820_caseD_65;
    }
    if (param_1 == 0x3ec) {
      return ZEXT816(0x7fffffff00000000) << 0x40;
    }
  }
  return ZEXT816(0xffffffffffffffd8);
}

