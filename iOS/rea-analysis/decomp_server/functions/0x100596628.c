// rea decompile_all
// name: FUN_100596628
// address: 0x100596628
// body: available
// range: 0x100596628-0x100596937 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100596748) */
/* WARNING: Removing unreachable block (ram,0x000100596934) */
/* WARNING: Removing unreachable block (ram,0x00010059682c) */
/* WARNING: Removing unreachable block (ram,0x0001005967e4) */
/* WARNING: Removing unreachable block (ram,0x000100596800) */
/* WARNING: Removing unreachable block (ram,0x0001005968ac) */
/* WARNING: Removing unreachable block (ram,0x000100596848) */
/* WARNING: Removing unreachable block (ram,0x00010059676c) */

void FUN_100596628(long param_1,undefined8 param_2,long param_3,long param_4,ulong param_5)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  code *pcVar4;
  long unaff_x21;
  code *pcVar5;
  undefined1 auStack_78 [24];
  
  pcVar5 = *(code **)(param_5 + 0x10);
  lVar1 = param_4;
  uVar3 = param_5;
  (*pcVar5)();
  if (unaff_x21 == 0) {
    while ((uVar3 & 1) == 0) {
      switch(lVar1) {
      case 1:
        FUN_1005a0e9c(param_2,param_1,param_4,param_5,FUN_1005b2ac4,&DAT_1009d5158);
        break;
      case 2:
        _swift_beginAccess(param_1 + 0x11,auStack_78,0x21,0);
        pcVar4 = *(code **)(param_5 + 0x140);
        lVar1 = param_1 + 0x11;
        goto LAB_1005966c8;
      case 3:
        _swift_beginAccess(param_1 + 0x15,auStack_78,0x21,0);
        pcVar4 = *(code **)(param_5 + 0x140);
        lVar1 = param_1 + 0x15;
        goto LAB_1005966c8;
      case 4:
      case 7:
      case 8:
      case 9:
      case 0xb:
      case 0xc:
      case 0xd:
      case 0xe:
      case 0x12:
switchD_10059671c_caseD_4:
        if (lVar1 - 1000U < 0x1ffffc18) {
          lVar2 = lVar1;
          FUN_1005a9430();
          (**(code **)(param_5 + 0x1d0))(param_3 + 0x10,&DAT_1009d50b8,lVar2,lVar1,param_4,param_5);
        }
        break;
      case 5:
        _swift_beginAccess(param_1 + 0x13,auStack_78,0x21,0);
        pcVar4 = *(code **)(param_5 + 0x140);
        lVar1 = param_1 + 0x13;
        goto LAB_1005966c8;
      case 6:
        FUN_100596938(param_2,param_1,param_4,param_5);
        break;
      case 10:
        _swift_beginAccess(param_1 + 0x16,auStack_78,0x21,0);
        pcVar4 = *(code **)(param_5 + 0x140);
        lVar1 = param_1 + 0x16;
        goto LAB_1005966c8;
      case 0xf:
        _swift_beginAccess(param_1 + 0x14,auStack_78,0x21,0);
        pcVar4 = *(code **)(param_5 + 0x140);
        lVar1 = param_1 + 0x14;
        goto LAB_1005966c8;
      case 0x10:
        _swift_beginAccess(param_1 + 0x17,auStack_78,0x21,0);
        pcVar4 = *(code **)(param_5 + 0x140);
        lVar1 = param_1 + 0x17;
LAB_1005966c8:
        (*pcVar4)(lVar1,param_4,param_5);
        _swift_endAccess(auStack_78);
        break;
      case 0x11:
        FUN_1005969cc(param_2,param_1,param_4,param_5);
        break;
      case 0x13:
        FUN_100596a60(param_2,param_1,param_4,param_5);
        break;
      case 0x14:
        FUN_100596af4(param_2,param_1,param_4,param_5,FUN_1005ab408,&DAT_1009d5380);
        break;
      case 0x15:
        FUN_100596b94(param_2,param_1,param_4,param_5);
        break;
      case 0x16:
        FUN_100596c28(param_2,param_1,param_4,param_5,FUN_1005ab544,&DAT_1009d5408);
        break;
      default:
        if (lVar1 != 999) goto switchD_10059671c_caseD_4;
        FUN_100596cc8(param_2,param_1,param_4,param_5);
      }
      lVar1 = param_4;
      uVar3 = param_5;
      (*pcVar5)();
    }
  }
  return;
}

