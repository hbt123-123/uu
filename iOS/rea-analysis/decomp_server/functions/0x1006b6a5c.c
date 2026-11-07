// rea decompile_all
// name: FUN_1006b6a5c
// address: 0x1006b6a5c
// body: available
// range: 0x1006b6a5c-0x1006b6d07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_1006b6a5c(uint *param_1,int param_2,uint param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = 0xffffffffffffffd8;
  if (param_2 < 400) {
    switch(param_2) {
    case 100:
      if ((int)param_3 < -0x20000) {
        param_1[0xb] = 0xfffe0000;
        return 0;
      }
      if (0x16 < (int)param_3) {
        param_1[0xb] = 0x16;
        return 0x16;
      }
      if (param_3 != 0) {
        param_1[0xb] = param_3;
        return (ulong)(param_3 & ((int)param_3 >> 0x1f ^ 0xffffffffU));
      }
      return (ulong)(param_1[0xb] & ((int)param_1[0xb] >> 0x1f ^ 0xffffffffU));
    case 0x65:
      if ((param_3 != 0) && (param_3 - 0x20 < 0xffffffea)) {
        return 0xffffffffffffffd6;
      }
      param_1[1] = param_3;
      break;
    case 0x66:
      if ((param_3 != 0) && (param_3 - 0x1f < 0xffffffe7)) {
        return 0xffffffffffffffd6;
      }
      param_1[3] = param_3;
      break;
    case 0x67:
      if ((param_3 != 0) && (param_3 - 0x1f < 0xffffffe7)) {
        return 0xffffffffffffffd6;
      }
      param_1[2] = param_3;
      break;
    case 0x68:
      if (0x1e < param_3) {
        return 0xffffffffffffffd6;
      }
      param_1[4] = param_3;
      break;
    case 0x69:
      if ((4 < param_3 - 3) && (param_3 != 0)) {
        return 0xffffffffffffffd6;
      }
      param_1[5] = param_3;
      break;
    case 0x6a:
      if (0x20000 < param_3) {
        return 0xffffffffffffffd6;
      }
      param_1[6] = param_3;
      break;
    case 0x6b:
      if (9 < param_3) {
        return 0xffffffffffffffd6;
      }
      param_1[7] = param_3;
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
      goto switchD_1006b6a8c_caseD_6c;
    case 0xa0:
      param_1[0x18] = (uint)(param_3 != 0);
      return (ulong)(param_3 != 0);
    case 0xa1:
      if ((param_3 != 0) && (param_3 - 0x1f < 0xffffffe7)) {
        return 0xffffffffffffffd6;
      }
      param_1[0x19] = param_3;
      break;
    case 0xa2:
      if ((param_3 != 0) && (param_3 - 0x1001 < 0xfffff003)) {
        return 0xffffffffffffffd6;
      }
      param_1[0x1b] = param_3;
      break;
    case 0xa3:
      if (8 < param_3) {
        return 0xffffffffffffffd6;
      }
      param_1[0x1a] = param_3;
      break;
    case 0xa4:
      if (0x19 < (int)param_3) {
        return 0xffffffffffffffd6;
      }
      param_1[0x1c] = param_3;
      break;
    case 200:
      param_1[8] = (uint)(param_3 != 0);
      return (ulong)(param_3 != 0);
    case 0xc9:
      param_1[9] = (uint)(param_3 != 0);
      return (ulong)(param_3 != 0);
    case 0xca:
      param_1[10] = (uint)(param_3 == 0);
      return (ulong)(param_3 != 0);
    default:
      if (param_2 != 10) {
        return 0xffffffffffffffd8;
      }
      if (1 < param_3) {
        return 0xffffffffffffffd6;
      }
      *param_1 = param_3;
    }
  }
  else {
    if (param_2 < 1000) {
      uVar3 = 0;
      if (param_3 != 0) {
        uVar3 = 0xffffffffffffffd8;
      }
      uVar1 = 0;
      if (param_3 != 0) {
        uVar1 = 0xffffffffffffffd8;
      }
      if (param_2 != 500) {
        uVar1 = 0xffffffffffffffd8;
      }
      if (param_2 != 0x192) {
        uVar3 = uVar1;
      }
      uVar1 = 0;
      if (param_3 != 0) {
        uVar1 = 0xffffffffffffffd8;
      }
      uVar2 = 0;
      if (param_3 != 0) {
        uVar2 = 0xffffffffffffffd8;
      }
      if (param_2 != 0x191) {
        uVar2 = 0xffffffffffffffd8;
      }
      if (param_2 != 400) {
        uVar1 = uVar2;
      }
      if (param_2 < 0x192) {
        uVar3 = uVar1;
      }
      return uVar3;
    }
    if (param_2 < 0x3ea) {
      if (param_2 == 1000) {
        param_1[0xc] = (uint)(param_3 != 0);
        return (ulong)(param_3 != 0);
      }
      if (param_2 != 0x3e9) {
        return 0xffffffffffffffd8;
      }
      if (3 < param_3) {
        return 0xffffffffffffffd6;
      }
      param_1[0x11] = param_3;
    }
    else if (param_2 == 0x3ea) {
      if (2 < param_3) {
        return 0xffffffffffffffd6;
      }
      param_1[0x12] = param_3;
    }
    else {
      if (param_2 == 0x3eb) {
        if ((param_3 != 0) && (param_3 - 0x20001 < 0xfffe003f)) {
          return 0xffffffffffffffd6;
        }
        *(ulong *)(param_1 + 0xe) = (ulong)param_3;
        return (ulong)param_3;
      }
      if (param_2 != 0x3ec) {
        return 0xffffffffffffffd8;
      }
      if ((int)param_3 < 0) {
        return 0xffffffffffffffd6;
      }
      param_1[0x10] = param_3;
    }
  }
  uVar3 = (ulong)param_3;
switchD_1006b6a8c_caseD_6c:
  return uVar3;
}

