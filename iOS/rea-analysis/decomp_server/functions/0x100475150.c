// rea decompile_all
// name: FUN_100475150
// address: 0x100475150
// body: available
// range: 0x100475150-0x100475527 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001004753b8) */
/* WARNING: Removing unreachable block (ram,0x000100475354) */
/* WARNING: Removing unreachable block (ram,0x00010047540c) */
/* WARNING: Removing unreachable block (ram,0x000100475370) */
/* WARNING: Removing unreachable block (ram,0x0001004752c8) */
/* WARNING: Removing unreachable block (ram,0x000100475274) */
/* WARNING: Removing unreachable block (ram,0x000100475444) */
/* WARNING: Removing unreachable block (ram,0x000100475338) */
/* WARNING: Removing unreachable block (ram,0x0001004753d4) */
/* WARNING: Removing unreachable block (ram,0x0001004754ec) */
/* WARNING: Removing unreachable block (ram,0x000100475428) */
/* WARNING: Removing unreachable block (ram,0x000100475508) */
/* WARNING: Removing unreachable block (ram,0x0001004752e4) */
/* WARNING: Removing unreachable block (ram,0x000100475300) */
/* WARNING: Removing unreachable block (ram,0x0001004754d0) */
/* WARNING: Removing unreachable block (ram,0x0001004753f0) */
/* WARNING: Removing unreachable block (ram,0x00010047547c) */
/* WARNING: Removing unreachable block (ram,0x00010047523c) */
/* WARNING: Removing unreachable block (ram,0x000100475258) */
/* WARNING: Removing unreachable block (ram,0x0001004752ac) */
/* WARNING: Removing unreachable block (ram,0x000100475498) */
/* WARNING: Removing unreachable block (ram,0x0001004754b4) */
/* WARNING: Removing unreachable block (ram,0x000100475460) */
/* WARNING: Removing unreachable block (ram,0x000100475290) */
/* WARNING: Removing unreachable block (ram,0x00010047531c) */
/* WARNING: Removing unreachable block (ram,0x000100475524) */

void FUN_100475150(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

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
        pcVar4 = *(code **)(param_4 + 0x60);
        lVar2 = param_1 + 0x10;
        goto LAB_100475394;
      case 2:
        _swift_beginAccess(param_1 + 0x18,auStack_68,0x21,0);
        pcVar4 = *(code **)(param_4 + 0x60);
        lVar2 = param_1 + 0x18;
LAB_100475394:
        (*pcVar4)(lVar2,param_3,param_4);
        _swift_endAccess(auStack_68);
        break;
      case 3:
        FUN_100475528(param_1,param_2,param_3,param_4);
        break;
      case 4:
        FUN_100475a20(param_1,param_2,param_3,param_4);
        break;
      case 5:
        FUN_100475ea8(param_1,param_2,param_3,param_4);
        break;
      case 6:
        FUN_10047631c(param_1,param_2,param_3,param_4);
        break;
      case 7:
        FUN_1004767b0(param_1,param_2,param_3,param_4);
        break;
      case 8:
        FUN_100476b44(param_1,param_2,param_3,param_4);
        break;
      case 9:
        FUN_100476f4c(param_1,param_2,param_3,param_4);
        break;
      case 10:
        FUN_1004773c8(param_1,param_2,param_3,param_4);
        break;
      case 0xb:
        FUN_100477840(param_1,param_2,param_3,param_4);
        break;
      case 0xc:
        FUN_100477c54(param_1,param_2,param_3,param_4);
        break;
      case 0xd:
        FUN_100478064(param_1,param_2,param_3,param_4);
        break;
      case 0xe:
        FUN_10047875c(param_1,param_2,param_3,param_4);
        break;
      case 0xf:
        FUN_100478c44(param_1,param_2,param_3,param_4);
        break;
      case 0x10:
        FUN_100479100(param_1,param_2,param_3,param_4);
        break;
      case 0x11:
        FUN_1004794b0(param_1,param_2,param_3,param_4);
        break;
      case 0x12:
        FUN_100479898(param_1,param_2,param_3,param_4);
        break;
      case 0x13:
        FUN_100479c08(param_1,param_2,param_3,param_4);
        break;
      case 0x14:
        FUN_10047a018(param_1,param_2,param_3,param_4);
        break;
      case 0x15:
        FUN_10047a458(param_1,param_2,param_3,param_4);
        break;
      case 0x16:
        FUN_10047ab50(param_1,param_2,param_3,param_4);
        break;
      case 0x17:
        FUN_10047b1a0(param_1,param_2,param_3,param_4);
        break;
      case 0x18:
        FUN_10047b528(param_1,param_2,param_3,param_4);
        break;
      case 0x19:
        FUN_10047b9b0(param_1,param_2,param_3,param_4);
        break;
      case 0x1a:
        FUN_10047bea4(param_1,param_2,param_3,param_4);
        break;
      case 0x1b:
        FUN_10047c22c(param_1,param_2,param_3,param_4);
        break;
      case 0x1c:
        FUN_10047c6ac(param_1,param_2,param_3,param_4);
      }
      uVar1 = param_3;
      uVar3 = param_4;
      (*pcVar5)();
    }
  }
  return;
}

