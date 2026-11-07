// rea decompile_all
// name: FUN_1005a1698
// address: 0x1005a1698
// body: available
// range: 0x1005a1698-0x1005a1ab7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1005a1698(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char cVar8;
  char cVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined1 auStack_138 [24];
  undefined1 auStack_120 [24];
  ulong local_108;
  undefined8 uStack_100;
  long local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  long local_d8;
  undefined8 local_d0;
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  _swift_beginAccess(param_1 + 0x10,auStack_80,0,0);
  cVar8 = *(char *)(param_1 + 0x10);
  _swift_beginAccess(param_2 + 0x10,auStack_98,0,0);
  cVar9 = *(char *)(param_2 + 0x10);
  if ((long)cVar8 == 0xc) {
    if (cVar9 != '\f') {
      return 0;
    }
  }
  else {
    if (cVar9 == '\f') {
      return 0;
    }
    if (*(long *)(&DAT_10083cc80 + (long)cVar8 * 8) != *(long *)(&DAT_10083cc80 + (long)cVar9 * 8))
    {
      return 0;
    }
  }
  _swift_beginAccess(param_1 + 0x18,auStack_b0,0,0);
  uVar1 = *(ulong *)(param_1 + 0x18);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  lVar2 = *(long *)(param_1 + 0x28);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  _swift_beginAccess(param_2 + 0x18,auStack_c8,0,0);
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  uVar7 = *(undefined8 *)(param_2 + 0x20);
  lVar4 = *(long *)(param_2 + 0x28);
  uVar12 = *(undefined8 *)(param_2 + 0x30);
  if (lVar2 == 0) {
    FUN_1005a7f54(uVar1,uVar5,0,uVar6);
    lVar11 = lVar4;
    if (lVar4 == 0) {
      FUN_1005a7f54(uVar3,uVar7,0,uVar12);
      _swift_retain(param_1);
      _swift_retain(param_2);
      FUN_100541944(uVar1,uVar5,0,uVar6);
      goto LAB_1005a18a0;
    }
  }
  else {
    if (lVar4 != 0) {
      FUN_1005a7f54(uVar1,uVar5,lVar2,uVar6);
      FUN_1005a7f54(uVar3,uVar7,lVar4,uVar12);
      FUN_1005a7f54(uVar1,uVar5,lVar2,uVar6);
      FUN_1005a7f54(uVar3,uVar7,lVar4,uVar12);
      _swift_retain(param_1);
      _swift_retain(param_2);
      uVar10 = uVar1;
      FUN_1005a7724(uVar1,uVar5,lVar2,uVar6,uVar3,uVar7,lVar4,uVar12);
      FUN_100541944(uVar3,uVar7,lVar4,uVar12);
      FUN_100541944(uVar1,uVar5,lVar2,uVar6);
      FUN_100541944(uVar3,uVar7,lVar4,uVar12);
      FUN_100541944(uVar1,uVar5,lVar2,uVar6);
      if ((uVar10 & 1) == 0) {
        _swift_release(param_1);
        _swift_release(param_2);
        return 0;
      }
LAB_1005a18a0:
      _swift_beginAccess(param_1 + 0x38,auStack_120,0,0);
      uVar1 = *(ulong *)(param_1 + 0x38);
      uVar5 = *(undefined8 *)(param_1 + 0x40);
      lVar2 = *(long *)(param_1 + 0x48);
      uVar6 = *(undefined8 *)(param_1 + 0x50);
      _swift_beginAccess(param_2 + 0x38,auStack_138,0,0);
      uVar3 = *(undefined8 *)(param_2 + 0x38);
      uVar7 = *(undefined8 *)(param_2 + 0x40);
      lVar4 = *(long *)(param_2 + 0x48);
      uVar12 = *(undefined8 *)(param_2 + 0x50);
      local_108 = uVar1;
      uStack_100 = uVar5;
      local_f8 = lVar2;
      uStack_f0 = uVar6;
      local_e8 = uVar3;
      uStack_e0 = uVar7;
      local_d8 = lVar4;
      if (lVar2 == 0) {
        FUN_1005a7f54(uVar1,uVar5,0,uVar6);
        FUN_1005a7f54(uVar3,uVar7,lVar4,uVar12);
        _swift_release(param_1);
        _swift_release(param_2);
        if (lVar4 == 0) {
          FUN_100541944(uVar1,uVar5,0,uVar6);
          return 1;
        }
      }
      else {
        if (lVar4 != 0) {
          FUN_1005a7f54(uVar1,uVar5,lVar2,uVar6);
          FUN_1005a7f54(uVar3,uVar7,lVar4,uVar12);
          FUN_1005a7f54(uVar1,uVar5,lVar2,uVar6);
          FUN_1005a7f54(uVar3,uVar7,lVar4,uVar12);
          uVar10 = uVar1;
          FUN_1005a7724(uVar1,uVar5,lVar2,uVar6,uVar3,uVar7,lVar4,uVar12);
          FUN_100541944(uVar3,uVar7,lVar4,uVar12);
          FUN_100541944(uVar1,uVar5,lVar2,uVar6);
          _swift_release(param_1);
          _swift_release(param_2);
          FUN_100541944(uVar3,uVar7,lVar4,uVar12);
          FUN_100541944(uVar1,uVar5,lVar2,uVar6);
          if ((uVar10 & 1) == 0) {
            return 0;
          }
          return 1;
        }
        FUN_1005a7f54(uVar1,uVar5,lVar2,uVar6);
        FUN_1005a7f54(uVar3,uVar7,0,uVar12);
        _swift_release(param_1);
        _swift_release(param_2);
      }
      goto LAB_1005a1a78;
    }
    FUN_1005a7f54(uVar1,uVar5,lVar2,uVar6);
    lVar11 = 0;
  }
  FUN_1005a7f54(uVar3,uVar7,lVar11,uVar12);
  local_108 = uVar1;
  uStack_100 = uVar5;
  local_f8 = lVar2;
  uStack_f0 = uVar6;
  local_e8 = uVar3;
  uStack_e0 = uVar7;
  local_d8 = lVar4;
LAB_1005a1a78:
  local_d0 = uVar12;
  FUN_100040bb4(&local_108,&DAT_100aad018,&DAT_10083cbf8);
  return 0;
}

