// rea decompile_all
// name: FUN_1004545fc
// address: 0x1004545fc
// body: available
// range: 0x1004545fc-0x10045484f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010045478c) */
/* WARNING: Removing unreachable block (ram,0x0001004547f0) */
/* WARNING: Removing unreachable block (ram,0x000100454830) */
/* WARNING: Removing unreachable block (ram,0x00010045484c) */
/* WARNING: Removing unreachable block (ram,0x000100454714) */
/* WARNING: Removing unreachable block (ram,0x000100454770) */
/* WARNING: Removing unreachable block (ram,0x000100454730) */

void FUN_1004545fc(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  code *pcVar4;
  long unaff_x21;
  code *pcVar5;
  undefined1 auStack_68 [24];
  
  pcVar5 = *(code **)(param_4 + 0x10);
  uVar1 = param_3;
  uVar3 = param_4;
  (*pcVar5)();
  if (unaff_x21 == 0) {
    while ((uVar3 & 1) == 0) {
      switch(uVar1) {
      case 1:
        _swift_beginAccess(param_1 + 0x10,auStack_68,0x21,0);
        pcVar4 = *(code **)(param_4 + 0x48);
        lVar2 = param_1 + 0x10;
        goto LAB_100454684;
      case 2:
        _swift_beginAccess(param_1 + 0x14,auStack_68,0x21,0);
        pcVar4 = *(code **)(param_4 + 0x48);
        lVar2 = param_1 + 0x14;
        goto LAB_100454684;
      case 3:
        FUN_100454850(param_2,param_1,param_3,param_4);
        break;
      case 4:
        FUN_1004548e4(param_2,param_1,param_3,param_4);
        break;
      case 5:
        FUN_100454978(param_2,param_1,param_3,param_4);
        break;
      case 6:
        FUN_100454a0c(param_2,param_1,param_3,param_4);
        break;
      case 7:
        _swift_beginAccess(param_1 + 0x80,auStack_68,0x21,0);
        pcVar4 = *(code **)(param_4 + 0x138);
        lVar2 = param_1 + 0x80;
        goto LAB_100454684;
      case 8:
        _swift_beginAccess(param_1 + 0x88,auStack_68,0x21,0);
        pcVar4 = *(code **)(param_4 + 0x30);
        lVar2 = param_1 + 0x88;
        goto LAB_100454684;
      case 9:
        FUN_100454aa0(param_2,param_1,param_3,param_4);
        break;
      case 10:
        _swift_beginAccess(param_1 + 0xb0,auStack_68,0x21,0);
        pcVar4 = *(code **)(param_4 + 0x150);
        lVar2 = param_1 + 0xb0;
        goto LAB_100454684;
      case 0xb:
        FUN_100454b34(param_2,param_1,param_3,param_4);
        break;
      case 0xc:
        _swift_beginAccess(param_1 + 0xcc,auStack_68,0x21,0);
        pcVar4 = *(code **)(param_4 + 0x48);
        lVar2 = param_1 + 0xcc;
LAB_100454684:
        (*pcVar4)(lVar2,param_3,param_4);
        _swift_endAccess(auStack_68);
        break;
      case 0xd:
        FUN_100454bc8(param_2,param_1,param_3,param_4);
      }
      uVar1 = param_3;
      uVar3 = param_4;
      (*pcVar5)();
    }
  }
  return;
}

