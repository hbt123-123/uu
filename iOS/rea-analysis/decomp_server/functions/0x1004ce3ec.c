// rea decompile_all
// name: FUN_1004ce3ec
// address: 0x1004ce3ec
// body: available
// range: 0x1004ce3ec-0x1004ce7bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001004ce4c4) */
/* WARNING: Removing unreachable block (ram,0x0001004ce5c0) */
/* WARNING: Removing unreachable block (ram,0x0001004ce534) */
/* WARNING: Removing unreachable block (ram,0x0001004ce6d8) */
/* WARNING: Removing unreachable block (ram,0x0001004ce72c) */
/* WARNING: Removing unreachable block (ram,0x0001004ce710) */
/* WARNING: Removing unreachable block (ram,0x0001004ce550) */
/* WARNING: Removing unreachable block (ram,0x0001004ce4fc) */
/* WARNING: Removing unreachable block (ram,0x0001004ce4e0) */
/* WARNING: Removing unreachable block (ram,0x0001004ce6f4) */
/* WARNING: Removing unreachable block (ram,0x0001004ce668) */
/* WARNING: Removing unreachable block (ram,0x0001004ce748) */
/* WARNING: Removing unreachable block (ram,0x0001004ce5a4) */
/* WARNING: Removing unreachable block (ram,0x0001004ce7b8) */
/* WARNING: Removing unreachable block (ram,0x0001004ce588) */
/* WARNING: Removing unreachable block (ram,0x0001004ce780) */
/* WARNING: Removing unreachable block (ram,0x0001004ce6a0) */
/* WARNING: Removing unreachable block (ram,0x0001004ce764) */
/* WARNING: Removing unreachable block (ram,0x0001004ce64c) */
/* WARNING: Removing unreachable block (ram,0x0001004ce5dc) */
/* WARNING: Removing unreachable block (ram,0x0001004ce6bc) */
/* WARNING: Removing unreachable block (ram,0x0001004ce518) */
/* WARNING: Removing unreachable block (ram,0x0001004ce56c) */
/* WARNING: Removing unreachable block (ram,0x0001004ce614) */
/* WARNING: Removing unreachable block (ram,0x0001004ce684) */
/* WARNING: Removing unreachable block (ram,0x0001004ce5f8) */
/* WARNING: Removing unreachable block (ram,0x0001004ce630) */
/* WARNING: Removing unreachable block (ram,0x0001004ce79c) */

void FUN_1004ce3ec(undefined8 param_1,undefined8 param_2,ulong param_3)

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
        FUN_1004dfb14();
        (*pcVar4)(unaff_x20 + 0xa8,&DAT_1009c9e68,uVar1,param_2,param_3);
        break;
      case 2:
        FUN_1004ce7bc();
        break;
      case 3:
        FUN_1004ceadc();
        break;
      case 4:
        FUN_1004cee20();
        break;
      case 5:
        FUN_1004cf164();
        break;
      case 6:
        FUN_1004cf488();
        break;
      case 7:
        FUN_1004cf7ac();
        break;
      case 8:
        FUN_1004cfb88();
        break;
      case 9:
        FUN_1004d0184();
        break;
      case 10:
        FUN_1004d05a0();
        break;
      case 0xb:
        FUN_1004d0918();
        break;
      case 0xc:
        FUN_1004d0c3c();
        break;
      case 0xd:
        FUN_1004d0f6c();
        break;
      case 0xe:
        FUN_1004d1288();
        break;
      case 0xf:
        FUN_1004d1564();
        break;
      case 0x10:
        FUN_1004d1880();
        break;
      case 0x11:
        FUN_1004d1bb8();
        break;
      case 0x12:
        FUN_1004d1f20();
        break;
      case 0x13:
        FUN_1004d2258();
        break;
      case 0x14:
        FUN_1004d2590();
        break;
      case 0x15:
        FUN_1004d28f4();
        break;
      case 0x16:
        FUN_1004d2c14();
        break;
      case 0x17:
        FUN_1004d2f58();
        break;
      case 0x18:
        FUN_1004d3234();
        break;
      case 0x19:
        FUN_1004d356c();
        break;
      case 0x1a:
        FUN_1004d3848();
        break;
      case 0x1b:
        FUN_1004d3c54();
        break;
      case 0x1c:
        FUN_1004d40a0();
        break;
      case 0x1d:
        FUN_1004d437c();
      }
      uVar1 = param_2;
      uVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}

