// rea decompile_all
// name: FUN_1003e885c
// address: 0x1003e885c
// body: available
// range: 0x1003e885c-0x1003e8ad3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001003e8890) */

long FUN_1003e885c(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  long local_78;
  long lStack_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long local_48;
  
  FUN_100273260(&local_60,1);
  puVar3 = &DAT_100a759d8;
  FUN_100004bb4(&DAT_100a759d8,&DAT_10080c0a0);
  puVar1 = PTR___sypN_100995e88;
  plVar4 = &local_78;
  _swift_dynamicCast(plVar4,&local_60,PTR___sypN_100995e88 + 8,puVar3,6);
  lVar2 = local_78;
  if ((((ulong)plVar4 & 1) == 0) || (local_78 == 0)) {
    uStack_58 = 0;
    local_60 = 0;
    local_48 = 0;
    uStack_50 = 0;
    FUN_1000c776c(&local_60);
    uStack_58 = 0;
    local_60 = 0;
    local_48 = 0;
    uStack_50 = 0;
    FUN_1000c776c(&local_60);
LAB_1003e8934:
    lStack_70 = 0;
  }
  else {
    if (*(long *)(local_78 + 0x10) == 0) {
      uStack_58 = 0;
      local_60 = 0;
      local_48 = 0;
      uStack_50 = 0;
LAB_1003e89e0:
      FUN_1000c776c(&local_60);
      lVar5 = 0;
      uVar8 = 1;
      local_78 = lVar5;
      if (*(long *)(lVar2 + 0x10) == 0) goto LAB_1003e8a38;
LAB_1003e89f8:
      _swift_bridgeObjectRetain(lVar2);
      lVar6 = 0x67736d;
      uVar7 = 0;
      FUN_1001a2c70(0x67736d);
      if ((uVar7 & 1) == 0) {
        _swift_bridgeObjectRelease(lVar2);
        local_78 = lVar5;
        goto LAB_1003e8a38;
      }
      FUN_10003e8bc(*(long *)(lVar2 + 0x38) + lVar6 * 0x20,&local_60);
      _swift_bridgeObjectRelease(lVar2);
    }
    else {
      _swift_bridgeObjectRetain(local_78);
      lVar5 = 0x65646f63;
      uVar7 = 0;
      FUN_1001a2c70(0x65646f63);
      if ((uVar7 & 1) == 0) {
        uStack_58 = 0;
        local_60 = 0;
        local_48 = 0;
        uStack_50 = 0;
      }
      else {
        FUN_10003e8bc(*(long *)(lVar2 + 0x38) + lVar5 * 0x20,&local_60);
      }
      _swift_bridgeObjectRelease(lVar2);
      if (local_48 == 0) goto LAB_1003e89e0;
      plVar4 = &local_78;
      _swift_dynamicCast(plVar4,&local_60,puVar1 + 8,PTR___sSiN_100995968,6);
      if ((uint)plVar4 == 0) {
        local_78 = 0;
      }
      uVar8 = (uint)plVar4 ^ 1;
      lVar5 = local_78;
      if (*(long *)(lVar2 + 0x10) != 0) goto LAB_1003e89f8;
LAB_1003e8a38:
      uStack_58 = 0;
      local_60 = 0;
      local_48 = 0;
      uStack_50 = 0;
      lVar5 = local_78;
    }
    _swift_bridgeObjectRelease(lVar2);
    if (local_48 == 0) {
      FUN_1000c776c(&local_60);
      if ((uVar8 & 1) == 0) {
        if (lVar5 == 0) {
          lStack_70 = 0;
          goto LAB_1003e8abc;
        }
        goto LAB_1003e893c;
      }
      goto LAB_1003e8934;
    }
    plVar4 = &local_78;
    _swift_dynamicCast(plVar4,&local_60,puVar1 + 8,PTR___sSSN_1009957f8,6);
    if ((int)plVar4 == 0) {
      lStack_70 = 0;
    }
    if ((uVar8 & 1) == 0) {
      if (lVar5 == 0) {
LAB_1003e8abc:
        _swift_bridgeObjectRelease(lStack_70);
        return 0;
      }
      if (lStack_70 != 0) {
        _swift_retain(param_1);
        return lVar5;
      }
      goto LAB_1003e893c;
    }
  }
  _swift_bridgeObjectRelease(lStack_70);
LAB_1003e893c:
  _swift_retain(param_1);
  return -1;
}

