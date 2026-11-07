// rea decompile_all
// name: FUN_100002f00
// address: 0x100002f00
// body: available
// range: 0x100002f00-0x1000032ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

long FUN_100002f00(undefined1 param_1)

{
  long lVar1;
  
  lVar1 = -0x2fffffffffffffe6;
  switch(param_1) {
  case 0:
    return -0x2fffffffffffffe6;
  case 1:
  case 0x17:
  case 0xe2:
  case 0xe3:
  case 0xe4:
  case 0xe5:
  case 0xe6:
  case 0xe7:
  case 0xe8:
  case 0xe9:
  case 0xea:
  case 0xeb:
  case 0xef:
  case 0xf0:
  case 0xf2:
  case 0xf3:
  case 0xf4:
  case 0xf7:
  case 0xf8:
  case 0xfa:
  case 0xfb:
  case 0xfc:
  case 0xff:
    return -0x2fffffffffffffd6;
  case 2:
    return -0x2fffffffffffffd2;
  case 3:
    return -0x2fffffffffffffef;
  case 4:
  case 0x93:
  case 0xde:
  case 0xe0:
  case 0xdf:
  case 0xe1:
  case 0xdd:
    lVar1 = -0x1d;
    break;
  case 5:
    lVar1 = -0x21;
    goto LAB_100003188;
  case 6:
    return -0x2fffffffffffffbf;
  case 7:
    return -0x2fffffffffffffee;
  case 8:
    return -0x2fffffffffffffef;
  case 9:
  case 0xed:
  case 0xf5:
    return -0x2fffffffffffffe3;
  case 10:
    lVar1 = -0x16;
    break;
  case 0xb:
    return -0x2fffffffffffffda;
  case 0xc:
    return -0x2fffffffffffffdc;
  case 0xd:
    return -0x2fffffffffffffdf;
  case 0xe:
  case 0x88:
  case 0x7d:
  case 0x81:
  case 0x82:
  case 0x8d:
    lVar1 = -0x2fffffffffffffca;
  case 0x8e:
    return lVar1;
  case 0xf:
    lVar1 = -0x11;
LAB_100003188:
    return lVar1 + -0x2fffffffffffffcf;
  case 0x10:
    return -0x2fffffffffffffc3;
  case 0x11:
    return lVar1;
  case 0x12:
    return -0x2fffffffffffffd9;
  case 0x13:
    return -0x2fffffffffffffc8;
  case 0x14:
    return -0x2fffffffffffffcf;
  case 0x15:
    return -0x2fffffffffffffce;
  case 0x16:
    return -0x2fffffffffffffdb;
  default:
    return -0x2fffffffffffffda;
  case 0x7a:
    return -0x2fffffffffffffd6;
  case 0x7b:
    return -0x2fffffffffffffe6;
  case 0x7e:
    return -0x2fffffffffffffc3;
  case 0x7f:
    return -0x2fffffffffffffe6;
  case 0x83:
    return -0x2fffffffffffffda;
  case 0x85:
    return -0x2fffffffffffffda;
  case 0x86:
    return -0x2fffffffffffffd6;
  case 0x8b:
    return -0x2fffffffffffffc3;
  case 0x8c:
    return -0x2fffffffffffffd6;
  case 0x8f:
    return -0x2fffffffffffffe6;
  case 0x90:
    return -0x2fffffffffffffda;
  case 0x91:
    return -0x2fffffffffffffd6;
  case 0x92:
    return -0x2fffffffffffffc3;
  case 0x94:
  case 0xf9:
    return -0x2fffffffffffffd6;
  case 0xdc:
    return -0x2fffffffffffffc3;
  case 0xec:
    return -0x2fffffffffffffc8;
  case 0xee:
  case 0xf6:
  case 0xfe:
    goto switchD_100002f38_caseD_ee;
  case 0xf1:
    return -0x2fffffffffffffd6;
  case 0xfd:
    return -0x2fffffffffffffe6;
  }
  lVar1 = lVar1 + -0x2fffffffffffffcf;
switchD_100002f38_caseD_ee:
  return lVar1;
}

