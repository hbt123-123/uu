// rea decompile_all
// name: FUN_1004e55a4
// address: 0x1004e55a4
// body: available
// range: 0x1004e55a4-0x1004e58b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001004e5698) */
/* WARNING: Removing unreachable block (ram,0x0001004e5734) */
/* WARNING: Removing unreachable block (ram,0x0001004e56d8) */
/* WARNING: Removing unreachable block (ram,0x0001004e5868) */
/* WARNING: Removing unreachable block (ram,0x0001004e57e0) */
/* WARNING: Removing unreachable block (ram,0x0001004e5718) */

void FUN_1004e55a4(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

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
        FUN_1004e58b4(param_2,param_1,param_3,param_4);
        goto switchD_1004e567c_default;
      case 2:
        FUN_1004e5948(param_2,param_1,param_3,param_4);
        goto switchD_1004e567c_default;
      case 3:
        _swift_beginAccess(param_1 + 0x29,auStack_68,0x21,0);
        pcVar4 = *(code **)(param_4 + 0x138);
        lVar2 = param_1 + 0x29;
        break;
      case 4:
        _swift_beginAccess(param_1 + 0x2c,auStack_68,0x21,0);
        pcVar4 = *(code **)(param_4 + 0x48);
        lVar2 = param_1 + 0x2c;
        break;
      case 5:
        _swift_beginAccess(param_1 + 0x30,auStack_68,0x21,0);
        pcVar4 = *(code **)(param_4 + 0x48);
        lVar2 = param_1 + 0x30;
        break;
      case 6:
        _swift_beginAccess(param_1 + 0x34,auStack_68,0x21,0);
        pcVar4 = *(code **)(param_4 + 0x48);
        lVar2 = param_1 + 0x34;
        break;
      case 7:
        FUN_1004e59dc(param_2,param_1,param_3,param_4);
        goto switchD_1004e567c_default;
      case 8:
        _swift_beginAccess(param_1 + 0x44,auStack_68,0x21,0);
        pcVar4 = *(code **)(param_4 + 0x48);
        lVar2 = param_1 + 0x44;
        break;
      case 9:
        _swift_beginAccess(param_1 + 0x48,auStack_68,0x21,0);
        pcVar4 = *(code **)(param_4 + 0x48);
        lVar2 = param_1 + 0x48;
        break;
      case 10:
        FUN_1004e5a70(param_2,param_1,param_3,param_4);
        goto switchD_1004e567c_default;
      case 0xb:
        _swift_beginAccess(param_1 + 0x59,auStack_68,0x21,0);
        pcVar4 = *(code **)(param_4 + 0x138);
        lVar2 = param_1 + 0x59;
        break;
      case 0xc:
        FUN_1004e5b04(param_2,param_1,param_3,param_4);
        goto switchD_1004e567c_default;
      case 0xd:
        FUN_1004e5b98(param_2,param_1,param_3,param_4);
        goto switchD_1004e567c_default;
      case 0xe:
        _swift_beginAccess(param_1 + 0x7c,auStack_68,0x21,0);
        pcVar4 = *(code **)(param_4 + 0x48);
        lVar2 = param_1 + 0x7c;
        break;
      case 0xf:
        _swift_beginAccess(param_1 + 0x80,auStack_68,0x21,0);
        pcVar4 = *(code **)(param_4 + 0x48);
        lVar2 = param_1 + 0x80;
        break;
      case 0x10:
        _swift_beginAccess(param_1 + 0x84,auStack_68,0x21,0);
        pcVar4 = *(code **)(param_4 + 0x48);
        lVar2 = param_1 + 0x84;
        break;
      case 0x11:
        _swift_beginAccess(param_1 + 0x88,auStack_68,0x21,0);
        pcVar4 = *(code **)(param_4 + 0x48);
        lVar2 = param_1 + 0x88;
        break;
      case 0x12:
        _swift_beginAccess(param_1 + 0x8c,auStack_68,0x21,0);
        pcVar4 = *(code **)(param_4 + 0x48);
        lVar2 = param_1 + 0x8c;
        break;
      default:
        goto switchD_1004e567c_default;
      }
      (*pcVar4)(lVar2,param_3,param_4);
      _swift_endAccess(auStack_68);
switchD_1004e567c_default:
      uVar1 = param_3;
      uVar3 = param_4;
      (*pcVar5)();
    }
  }
  return;
}

