// rea decompile_all
// name: FUN_100131ca8
// address: 0x100131ca8
// body: available
// range: 0x100131ca8-0x1001321bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_100131ca8(byte param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  byte *pbVar10;
  long unaff_x20;
  undefined8 uVar11;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 *puStack_90;
  undefined *local_80;
  undefined8 local_78;
  byte *pbStack_70;
  
  puVar2 = &DAT_100a78b30;
  FUN_100004bb4(&DAT_100a78b30,&DAT_10080d968);
  uVar9 = 0xb0;
  _swift_allocObject();
  *(undefined8 *)(puVar2 + 0x18) = 4;
  *(undefined8 *)(puVar2 + 0x10) = 2;
  uVar3 = *(undefined8 *)PTR__kCFNetworkProxiesExceptionsList_100995220;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puVar6 = PTR___sSSSHsWP_100995808;
  puVar1 = PTR___sSSN_1009957f8;
  puVar4 = &local_78;
  local_78 = uVar3;
  pbStack_70 = (byte *)uVar9;
  __ss11AnyHashableVyABxcSHRzlufC
            (puVar2 + 0x20,puVar4,PTR___sSSN_1009957f8,PTR___sSSSHsWP_100995808);
  FUN_100132338();
  puVar5 = &DAT_100a756e8;
  pbVar10 = &BYTE_100809720;
  FUN_100004bb4();
  *(undefined **)(puVar2 + 0x60) = puVar5;
  *(undefined8 **)(puVar2 + 0x48) = puVar4;
  uVar3 = *(undefined8 *)PTR__kCFNetworkProxiesExcludeSimpleHostnames_100995228;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  local_78 = uVar3;
  pbStack_70 = pbVar10;
  __ss11AnyHashableVyABxcSHRzlufC(puVar2 + 0x68,&local_78,puVar1,puVar6);
  *(undefined **)(puVar2 + 0xa8) = PTR___sSbN_1009958c8;
  puVar2[0x90] = 1;
  puVar6 = puVar2;
  FUN_1000cc410();
  _swift_setDeallocating(puVar2);
  puVar5 = &DAT_100a775c0;
  FUN_100004bb4(&DAT_100a775c0,&DAT_10080c1f0);
  _swift_arrayDestroy(puVar2 + 0x20,2,puVar5);
  uVar3 = 0x20;
  _swift_deallocClassInstance(puVar2,0x20,7);
  if (param_1 < 2) {
    uVar9 = *(undefined8 *)PTR__kCFNetworkProxiesHTTPEnable_100995230;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    puVar2 = PTR___sSSSHsWP_100995808;
    local_98 = uVar9;
    puStack_90 = (undefined8 *)uVar3;
    __ss11AnyHashableVyABxcSHRzlufC(&local_78,&local_98,puVar1,PTR___sSSSHsWP_100995808);
    puVar5 = PTR___sSiN_100995968;
    local_80 = PTR___sSiN_100995968;
    local_98 = 1;
    FUN_10007f3d4(&local_98,auStack_b8);
    puVar8 = puVar6;
    _swift_isUniquelyReferenced_nonNull_native(puVar6);
    puVar4 = &local_78;
    FUN_1000614a4(auStack_b8,puVar4,puVar8);
    FUN_100132650(&local_78);
    uVar3 = *(undefined8 *)PTR__kCFNetworkProxiesHTTPProxy_100995240;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    local_98 = uVar3;
    puStack_90 = puVar4;
    __ss11AnyHashableVyABxcSHRzlufC(&local_78,&local_98,puVar1,puVar2);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
    uVar9 = *(undefined8 *)(unaff_x20 + 0x18);
    local_80 = puVar1;
    local_98 = uVar3;
    puStack_90 = (undefined8 *)uVar9;
    FUN_10007f3d4(&local_98,auStack_b8);
    _swift_bridgeObjectRetain_n(uVar9,2);
    puVar8 = puVar6;
    _swift_isUniquelyReferenced_nonNull_native(puVar6);
    puVar4 = &local_78;
    FUN_1000614a4(auStack_b8,puVar4,puVar8);
    FUN_100132650(&local_78);
    uVar7 = *(undefined8 *)PTR__kCFNetworkProxiesHTTPPort_100995238;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    local_98 = uVar7;
    puStack_90 = puVar4;
    __ss11AnyHashableVyABxcSHRzlufC(&local_78,&local_98,puVar1,puVar2);
    uVar11 = *(undefined8 *)(unaff_x20 + 0x20);
    local_80 = puVar5;
    local_98 = uVar11;
    FUN_10007f3d4(&local_98,auStack_b8);
    puVar8 = puVar6;
    _swift_isUniquelyReferenced_nonNull_native(puVar6);
    puVar4 = &local_78;
    FUN_1000614a4(auStack_b8,puVar4,puVar8);
    FUN_100132650(&local_78);
    uVar7 = *(undefined8 *)PTR__kCFNetworkProxiesHTTPSEnable_100995248;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    local_98 = uVar7;
    puStack_90 = puVar4;
    __ss11AnyHashableVyABxcSHRzlufC(&local_78,&local_98,puVar1,puVar2);
    local_80 = puVar5;
    local_98 = 1;
    FUN_10007f3d4(&local_98,auStack_b8);
    puVar8 = puVar6;
    _swift_isUniquelyReferenced_nonNull_native(puVar6);
    puVar4 = &local_78;
    FUN_1000614a4(auStack_b8,puVar4,puVar8);
    FUN_100132650(&local_78);
    uVar7 = *(undefined8 *)PTR__kCFNetworkProxiesHTTPSProxy_100995258;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    local_98 = uVar7;
    puStack_90 = puVar4;
    __ss11AnyHashableVyABxcSHRzlufC(&local_78,&local_98,puVar1,puVar2);
    local_80 = puVar1;
    local_98 = uVar3;
    puStack_90 = (undefined8 *)uVar9;
    FUN_10007f3d4(&local_98,auStack_b8);
    puVar8 = puVar6;
    _swift_isUniquelyReferenced_nonNull_native(puVar6);
    puVar4 = &local_78;
    FUN_1000614a4(auStack_b8,puVar4,puVar8);
    FUN_100132650(&local_78);
    uVar3 = *(undefined8 *)PTR__kCFNetworkProxiesHTTPSPort_100995250;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    local_98 = uVar3;
    puStack_90 = puVar4;
    __ss11AnyHashableVyABxcSHRzlufC(&local_78,&local_98,puVar1,puVar2);
    local_80 = puVar5;
    local_98 = uVar11;
  }
  else {
    uVar9 = *(undefined8 *)PTR__kCFNetworkProxiesSOCKSEnable_100995270;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    puVar2 = PTR___sSSSHsWP_100995808;
    local_98 = uVar9;
    puStack_90 = (undefined8 *)uVar3;
    __ss11AnyHashableVyABxcSHRzlufC(&local_78,&local_98,puVar1,PTR___sSSSHsWP_100995808);
    puVar5 = PTR___sSiN_100995968;
    local_80 = PTR___sSiN_100995968;
    local_98 = 1;
    FUN_10007f3d4(&local_98,auStack_b8);
    puVar8 = puVar6;
    _swift_isUniquelyReferenced_nonNull_native(puVar6);
    puVar4 = &local_78;
    FUN_1000614a4(auStack_b8,puVar4,puVar8);
    FUN_100132650(&local_78);
    uVar3 = *(undefined8 *)PTR__kCFNetworkProxiesSOCKSProxy_100995280;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    local_98 = uVar3;
    puStack_90 = puVar4;
    __ss11AnyHashableVyABxcSHRzlufC(&local_78,&local_98,puVar1,puVar2);
    local_98 = *(undefined8 *)(unaff_x20 + 0x10);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
    local_80 = puVar1;
    puStack_90 = (undefined8 *)uVar3;
    FUN_10007f3d4(&local_98,auStack_b8);
    _swift_bridgeObjectRetain(uVar3);
    puVar8 = puVar6;
    _swift_isUniquelyReferenced_nonNull_native(puVar6);
    puVar4 = &local_78;
    FUN_1000614a4(auStack_b8,puVar4,puVar8);
    FUN_100132650(&local_78);
    uVar3 = *(undefined8 *)PTR__kCFNetworkProxiesSOCKSPort_100995278;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    local_98 = uVar3;
    puStack_90 = puVar4;
    __ss11AnyHashableVyABxcSHRzlufC(&local_78,&local_98,puVar1,puVar2);
    local_98 = *(undefined8 *)(unaff_x20 + 0x20);
    local_80 = puVar5;
  }
  FUN_10007f3d4(&local_98,auStack_b8);
  puVar2 = puVar6;
  _swift_isUniquelyReferenced_nonNull_native(puVar6);
  FUN_1000614a4(auStack_b8,&local_78,puVar2);
  FUN_100132650(&local_78);
  return puVar6;
}

