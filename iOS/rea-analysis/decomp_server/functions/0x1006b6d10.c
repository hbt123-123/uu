// rea decompile_all
// name: FUN_1006b6d10
// address: 0x1006b6d10
// body: available
// range: 0x1006b6d10-0x1006b6e4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1006b6d10(uint *param_1,int param_2,uint *param_3)

{
  undefined8 uVar1;
  uint uVar2;
  
  uVar1 = 0xffffffffffffffd8;
  if (param_2 < 400) {
    switch(param_2) {
    case 100:
      uVar2 = param_1[0xb];
      break;
    case 0x65:
      uVar2 = param_1[1];
      break;
    case 0x66:
      uVar2 = param_1[3];
      break;
    case 0x67:
      uVar2 = param_1[2];
      break;
    case 0x68:
      uVar2 = param_1[4];
      break;
    case 0x69:
      uVar2 = param_1[5];
      break;
    case 0x6a:
      uVar2 = param_1[6];
      break;
    case 0x6b:
      uVar2 = param_1[7];
      break;
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
      goto switchD_1006b6d3c_caseD_6c;
    case 0xa0:
      uVar2 = param_1[0x18];
      break;
    case 0xa1:
      uVar2 = param_1[0x19];
      break;
    case 0xa2:
      uVar2 = param_1[0x1b];
      break;
    case 0xa3:
      uVar2 = param_1[0x1a];
      break;
    case 0xa4:
      uVar2 = param_1[0x1c];
      break;
    case 200:
      uVar2 = param_1[8];
      break;
    case 0xc9:
      uVar2 = param_1[9];
      break;
    case 0xca:
      uVar2 = (uint)(param_1[10] == 0);
      break;
    default:
      if (param_2 != 10) {
        return 0xffffffffffffffd8;
      }
      uVar2 = *param_1;
    }
  }
  else if (param_2 < 0x3ea) {
    if (param_2 == 400) {
      uVar2 = param_1[0x13];
    }
    else if (param_2 == 1000) {
      uVar2 = param_1[0xc];
    }
    else {
      if (param_2 != 0x3e9) {
        return 0xffffffffffffffd8;
      }
      uVar2 = param_1[0x11];
    }
  }
  else if (param_2 == 0x3ea) {
    uVar2 = param_1[0x12];
  }
  else if (param_2 == 0x3eb) {
    uVar2 = param_1[0xe];
  }
  else {
    if (param_2 != 0x3ec) {
      return 0xffffffffffffffd8;
    }
    uVar2 = param_1[0x10];
  }
  uVar1 = 0;
  *param_3 = uVar2;
switchD_1006b6d3c_caseD_6c:
  return uVar1;
}

