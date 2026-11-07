// rea decompile_all
// name: FUN_100592c68
// address: 0x100592c68
// body: available
// range: 0x100592c68-0x100593067 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100592f68) */
/* WARNING: Removing unreachable block (ram,0x000100592e08) */
/* WARNING: Removing unreachable block (ram,0x000100592d9c) */

void FUN_100592c68(long param_1,undefined8 param_2,long param_3,long param_4,ulong param_5)

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
        _swift_beginAccess(param_1 + 0x10,auStack_78,0x21,0);
        pcVar4 = *(code **)(param_5 + 0x158);
        lVar1 = param_1 + 0x10;
        break;
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 0xc:
      case 0xd:
      case 0xe:
      case 0xf:
      case 0x13:
      case 0x15:
      case 0x16:
      case 0x18:
      case 0x19:
      case 0x1a:
      case 0x1c:
      case 0x1d:
      case 0x1e:
      case 0x20:
      case 0x21:
      case 0x22:
      case 0x23:
      case 0x26:
      case 0x2a:
      case 0x2b:
      case 0x2e:
      case 0x2f:
      case 0x30:
      case 0x31:
switchD_100592d54_caseD_2:
        if (lVar1 - 1000U < 0x1ffffc18) {
          lVar2 = lVar1;
          FUN_1005a8f58();
          (**(code **)(param_5 + 0x1d0))(param_3 + 0x10,&DAT_1009d4f00,lVar2,lVar1,param_4,param_5);
        }
        goto LAB_100592d28;
      case 8:
        _swift_beginAccess(param_1 + 0x20,auStack_78,0x21,0);
        pcVar4 = *(code **)(param_5 + 0x158);
        lVar1 = param_1 + 0x20;
        break;
      case 9:
        FUN_100593068(param_2,param_1,param_4,param_5);
        goto LAB_100592d28;
      case 10:
        _swift_beginAccess(param_1 + 0x30,auStack_78,0x21,0);
        pcVar4 = *(code **)(param_5 + 0x140);
        lVar1 = param_1 + 0x30;
        break;
      case 0xb:
        _swift_beginAccess(param_1 + 0x38,auStack_78,0x21,0);
        pcVar4 = *(code **)(param_5 + 0x158);
        lVar1 = param_1 + 0x38;
        break;
      case 0x10:
        _swift_beginAccess(param_1 + 0x48,auStack_78,0x21,0);
        pcVar4 = *(code **)(param_5 + 0x140);
        lVar1 = param_1 + 0x48;
        break;
      case 0x11:
        _swift_beginAccess(param_1 + 0x49,auStack_78,0x21,0);
        pcVar4 = *(code **)(param_5 + 0x140);
        lVar1 = param_1 + 0x49;
        break;
      case 0x12:
        _swift_beginAccess(param_1 + 0x4a,auStack_78,0x21,0);
        pcVar4 = *(code **)(param_5 + 0x140);
        lVar1 = param_1 + 0x4a;
        break;
      case 0x14:
        _swift_beginAccess(param_1 + 0x31,auStack_78,0x21,0);
        pcVar4 = *(code **)(param_5 + 0x140);
        lVar1 = param_1 + 0x31;
        break;
      case 0x17:
        _swift_beginAccess(param_1 + 0x4b,auStack_78,0x21,0);
        pcVar4 = *(code **)(param_5 + 0x140);
        lVar1 = param_1 + 0x4b;
        break;
      case 0x1b:
        _swift_beginAccess(param_1 + 0x32,auStack_78,0x21,0);
        pcVar4 = *(code **)(param_5 + 0x140);
        lVar1 = param_1 + 0x32;
        break;
      case 0x1f:
        _swift_beginAccess(param_1 + 0x4c,auStack_78,0x21,0);
        pcVar4 = *(code **)(param_5 + 0x140);
        lVar1 = param_1 + 0x4c;
        break;
      case 0x24:
        _swift_beginAccess(param_1 + 0x50,auStack_78,0x21,0);
        pcVar4 = *(code **)(param_5 + 0x158);
        lVar1 = param_1 + 0x50;
        break;
      case 0x25:
        _swift_beginAccess(param_1 + 0x60,auStack_78,0x21,0);
        pcVar4 = *(code **)(param_5 + 0x158);
        lVar1 = param_1 + 0x60;
        break;
      case 0x27:
        _swift_beginAccess(param_1 + 0x70,auStack_78,0x21,0);
        pcVar4 = *(code **)(param_5 + 0x158);
        lVar1 = param_1 + 0x70;
        break;
      case 0x28:
        _swift_beginAccess(param_1 + 0x80,auStack_78,0x21,0);
        pcVar4 = *(code **)(param_5 + 0x158);
        lVar1 = param_1 + 0x80;
        break;
      case 0x29:
        _swift_beginAccess(param_1 + 0x90,auStack_78,0x21,0);
        pcVar4 = *(code **)(param_5 + 0x158);
        lVar1 = param_1 + 0x90;
        break;
      case 0x2c:
        _swift_beginAccess(param_1 + 0xa0,auStack_78,0x21,0);
        pcVar4 = *(code **)(param_5 + 0x158);
        lVar1 = param_1 + 0xa0;
        break;
      case 0x2d:
        _swift_beginAccess(param_1 + 0xb0,auStack_78,0x21,0);
        pcVar4 = *(code **)(param_5 + 0x158);
        lVar1 = param_1 + 0xb0;
        break;
      case 0x32:
        FUN_1005930fc(param_2,param_1,param_4,param_5);
        goto LAB_100592d28;
      default:
        if (lVar1 != 999) goto switchD_100592d54_caseD_2;
        FUN_100593190(param_2,param_1,param_4,param_5);
        goto LAB_100592d28;
      }
      (*pcVar4)(lVar1,param_4,param_5);
      _swift_endAccess(auStack_78);
LAB_100592d28:
      lVar1 = param_4;
      uVar3 = param_5;
      (*pcVar5)();
    }
  }
  return;
}

