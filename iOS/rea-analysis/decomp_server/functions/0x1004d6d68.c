// rea decompile_all
// name: FUN_1004d6d68
// address: 0x1004d6d68
// body: available
// range: 0x1004d6d68-0x1004d70c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001004d6e40) */
/* WARNING: Removing unreachable block (ram,0x0001004d6ecc) */
/* WARNING: Removing unreachable block (ram,0x0001004d6ee8) */
/* WARNING: Removing unreachable block (ram,0x0001004d6fe4) */
/* WARNING: Removing unreachable block (ram,0x0001004d7070) */
/* WARNING: Removing unreachable block (ram,0x0001004d6eb0) */
/* WARNING: Removing unreachable block (ram,0x0001004d6f20) */
/* WARNING: Removing unreachable block (ram,0x0001004d701c) */
/* WARNING: Removing unreachable block (ram,0x0001004d70a8) */
/* WARNING: Removing unreachable block (ram,0x0001004d70c4) */
/* WARNING: Removing unreachable block (ram,0x0001004d6f04) */
/* WARNING: Removing unreachable block (ram,0x0001004d6e94) */
/* WARNING: Removing unreachable block (ram,0x0001004d6e5c) */
/* WARNING: Removing unreachable block (ram,0x0001004d6f3c) */
/* WARNING: Removing unreachable block (ram,0x0001004d708c) */
/* WARNING: Removing unreachable block (ram,0x0001004d7038) */
/* WARNING: Removing unreachable block (ram,0x0001004d6e78) */
/* WARNING: Removing unreachable block (ram,0x0001004d6f74) */
/* WARNING: Removing unreachable block (ram,0x0001004d7054) */
/* WARNING: Removing unreachable block (ram,0x0001004d7000) */
/* WARNING: Removing unreachable block (ram,0x0001004d6f58) */
/* WARNING: Removing unreachable block (ram,0x0001004d6f90) */
/* WARNING: Removing unreachable block (ram,0x0001004d6fac) */
/* WARNING: Removing unreachable block (ram,0x0001004d6fc8) */

void FUN_1004d6d68(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  long unaff_x20;
  long unaff_x21;
  code *pcVar3;
  code *pcVar4;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  uVar1 = param_2;
  uVar2 = param_3;
  (*pcVar3)();
  if (unaff_x21 == 0) {
    while ((uVar2 & 1) == 0) {
      switch(uVar1) {
      case 1:
        pcVar4 = *(code **)(param_3 + 0x198);
        FUN_1004dfc10();
        (*pcVar4)(unaff_x20 + 0x88,&DAT_1009c9ee8,uVar1,param_2,param_3);
        break;
      case 2:
        FUN_1004d70c8();
        break;
      case 3:
        FUN_1004d72c0();
        break;
      case 4:
        FUN_1004d75d4();
        break;
      case 5:
        FUN_1004d7a28();
        break;
      case 6:
        FUN_1004d7de0();
        break;
      case 7:
        FUN_1004d8058();
        break;
      case 8:
        FUN_1004d8268();
        break;
      case 9:
        FUN_1004d8478();
        break;
      case 10:
        FUN_1004d8688();
        break;
      case 0xb:
        FUN_1004d8898();
        break;
      case 0xc:
        FUN_1004d8aac();
        break;
      case 0xd:
        FUN_1004d8d3c();
        break;
      case 0xe:
        FUN_1004d9008();
        break;
      case 0xf:
        FUN_1004d9254();
        break;
      case 0x10:
        FUN_1004d94a0();
        break;
      case 0x11:
        FUN_1004d96ec();
        break;
      case 0x12:
        FUN_1004d9900();
        break;
      case 0x13:
        FUN_1004d9b10();
        break;
      case 0x14:
        FUN_1004d9d9c();
        break;
      case 0x15:
        FUN_1004da0c8();
        break;
      case 0x16:
        FUN_1004da2dc();
        break;
      case 0x17:
        FUN_1004da4f0();
        break;
      case 0x18:
        FUN_1004da754();
        break;
      case 0x1a:
        FUN_1004da9a0();
      }
      uVar1 = param_2;
      uVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}

