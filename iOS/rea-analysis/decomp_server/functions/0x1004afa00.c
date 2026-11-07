// rea decompile_all
// name: FUN_1004afa00
// address: 0x1004afa00
// body: available
// range: 0x1004afa00-0x1004afbef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001004afab8) */
/* WARNING: Removing unreachable block (ram,0x0001004afb28) */
/* WARNING: Removing unreachable block (ram,0x0001004afad4) */
/* WARNING: Removing unreachable block (ram,0x0001004afbb4) */
/* WARNING: Removing unreachable block (ram,0x0001004afbec) */
/* WARNING: Removing unreachable block (ram,0x0001004afbd0) */
/* WARNING: Removing unreachable block (ram,0x0001004afb0c) */
/* WARNING: Removing unreachable block (ram,0x0001004afb60) */
/* WARNING: Removing unreachable block (ram,0x0001004afb98) */
/* WARNING: Removing unreachable block (ram,0x0001004afb44) */
/* WARNING: Removing unreachable block (ram,0x0001004afb7c) */
/* WARNING: Removing unreachable block (ram,0x0001004afaf0) */

void FUN_1004afa00(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  long unaff_x21;
  code *pcVar3;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  uVar1 = param_2;
  uVar2 = param_3;
  (*pcVar3)();
  if (unaff_x21 == 0) {
    while ((uVar2 & 1) == 0) {
      switch(uVar1) {
      case 1:
        FUN_1004afbf0();
        break;
      case 2:
        FUN_1004b0064();
        break;
      case 3:
        FUN_1004b0428();
        break;
      case 4:
        FUN_1004b07c4();
        break;
      case 5:
        FUN_1004b0b6c();
        break;
      case 6:
        FUN_1004b0ec4();
        break;
      case 7:
        FUN_1004b11b8();
        break;
      case 8:
        FUN_1004b14ac();
        break;
      case 9:
        FUN_1004b1828();
        break;
      case 10:
        FUN_1004b1ba4();
        break;
      case 0xb:
        FUN_1004b1f34();
        break;
      case 0xc:
        FUN_1004b227c();
        break;
      case 0xd:
        FUN_1004b2570();
      }
      uVar1 = param_2;
      uVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}

