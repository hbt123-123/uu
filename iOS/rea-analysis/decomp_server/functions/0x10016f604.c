// rea decompile_all
// name: FUN_10016f604
// address: 0x10016f604
// body: available
// range: 0x10016f604-0x10016faa3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10016f604(long param_1,long param_2,code *param_3)

{
  undefined1 uVar1;
  ulong uVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ID IVar8;
  code *pcVar9;
  long extraout_x8;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 local_210;
  undefined1 *local_208;
  code *local_200;
  long lStack_1f8;
  undefined *local_1f0;
  code *local_1e8;
  long local_1e0;
  ulong local_1d8;
  undefined1 auStack_1c0 [24];
  undefined1 auStack_1a8 [48];
  undefined1 auStack_178 [192];
  ulong local_b8;
  undefined *puStack_b0;
  code *local_a8;
  undefined8 local_78;
  undefined1 local_70;
  
  puVar7 = &DAT_100a77040;
  puVar6 = &DAT_10080e910;
  pcVar9 = param_3;
  FUN_100004bb4();
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = (long)&local_210 - extraout_x8;
  uVar2 = param_2 + 0x28;
  _swift_unknownObjectWeakLoadStrong();
  if (uVar2 == 0) {
    puVar7 = &_OBJC_CLASS___NSError;
    _objc_allocWithZone();
    uVar11 = 0xd000000000000012;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x8000000100895980);
    IVar8 = _objc_msgSend((ID)puVar7,"initWithDomain:code:userInfo:",uVar11,0xf424c,0);
    FUN_100616260(IVar8);
  }
  else {
    local_1d8 = uVar2;
    FUN_10013aa44();
    if (param_3 != (code *)0x0) {
      (*param_3)(uVar2);
    }
    local_b8 = uVar2 & 0xffffffff;
    local_78 = 0x3000000000000000;
    local_70 = 0;
    puStack_b0 = puVar6;
    local_a8 = pcVar9;
    FUN_100008184(puVar6,pcVar9);
    FUN_100193a8c(auStack_178,&local_b8);
    FUN_100006cdc(puVar6,pcVar9);
    param_2 = param_2 + 0x18;
    _swift_unknownObjectWeakLoadStrong();
    if (param_2 == 0) {
      puVar7 = &_OBJC_CLASS___NSError;
      _objc_allocWithZone();
      uVar11 = 0xd000000000000012;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x8000000100895980);
      IVar8 = _objc_msgSend((ID)puVar7,"initWithDomain:code:userInfo:",uVar11,0xf424c,0);
      FUN_100616260(IVar8);
      FUN_1000914e4(auStack_178);
      FUN_100006cdc(puVar6,pcVar9);
    }
    else {
      puVar3 = auStack_178;
      local_1e0 = param_2;
      FUN_1001bd040(puVar3,0,0);
      lVar4 = 0;
      local_208 = puVar3;
      __s8Dispatch0A13WorkItemFlagsVMa();
      local_200 = *(code **)(*(long *)(lVar4 + -8) + 0x38);
      lStack_1f8 = lVar4;
      (*local_200)(lVar12,1,1,lVar4);
      puVar7 = &DAT_1009a0528;
      _swift_allocObject(&DAT_1009a0528,0x30,7);
      *(long *)(puVar7 + 0x10) = param_1;
      *(int *)(puVar7 + 0x18) = (int)uVar2;
      *(undefined **)(puVar7 + 0x20) = puVar6;
      *(code **)(puVar7 + 0x28) = pcVar9;
      FUN_100008184(puVar6,pcVar9);
      lVar4 = param_1;
      _swift_retain();
      FUN_10060edd8();
      _swift_beginAccess();
      uVar11 = *(undefined8 *)(lVar4 + 8);
      puVar5 = &DAT_100a79cf0;
      local_1f0 = puVar6;
      local_1e8 = pcVar9;
      FUN_100004bb4(&DAT_100a79cf0,&DAT_10080fb50);
      puVar6 = &DAT_100a79cf8;
      FUN_10003f840(&DAT_100a79cf8,&DAT_100a79cf0,&DAT_10080fb50,
                    &TargetProtocolConformanceDescriptor_1008488a0);
      puVar3 = local_208;
      FUN_1006170a4(uVar11,lVar12,FUN_100170370,puVar7,puVar5,puVar6);
      local_210 = uVar11;
      _swift_release(puVar3);
      _swift_release(puVar7);
      FUN_100040bb4(lVar12,&DAT_100a77040,&DAT_10080e910);
      (*local_200)(lVar12,1,1,lStack_1f8);
      _swift_beginAccess(lVar4,auStack_1a8,0,0);
      uVar10 = *(undefined8 *)(lVar4 + 8);
      _swift_beginAccess(lVar4,auStack_1c0,0,0);
      uVar1 = *(undefined1 *)(lVar4 + 0x10);
      _swift_retain(param_1);
      puVar7 = &DAT_100a77058;
      FUN_100004bb4(&DAT_100a77058,&DAT_10080e920);
      puVar6 = &DAT_100a77060;
      FUN_10003f840(&DAT_100a77060,&DAT_100a77058,&DAT_10080e920,
                    &TargetProtocolConformanceDescriptor_1008488bc);
      uVar11 = local_210;
      FUN_10060913c(uVar10,lVar12,uVar1,FUN_100170390,param_1,puVar7,puVar6);
      FUN_1000914e4(auStack_178);
      _swift_unknownObjectRelease(local_1e0);
      _swift_release(uVar10);
      _swift_release(uVar11);
      _swift_release(param_1);
      FUN_100006cdc(local_1f0,local_1e8);
      FUN_100040bb4(lVar12,&DAT_100a77040,&DAT_10080e910);
    }
  }
  return;
}

