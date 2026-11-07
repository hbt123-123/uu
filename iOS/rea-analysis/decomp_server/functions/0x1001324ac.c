// rea decompile_all
// name: FUN_1001324ac
// address: 0x1001324ac
// body: available
// range: 0x1001324ac-0x10013264f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001324ac(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 local_1d8;
  undefined1 *puStack_1d0;
  undefined1 auStack_1c8 [392];
  
  puVar2 = &DAT_100a78b30;
  FUN_100004bb4(&DAT_100a78b30,&DAT_10080d968);
  puVar6 = auStack_1c8;
  _swift_initStackObject();
  *(undefined8 *)(puVar2 + 0x18) = 10;
  *(undefined8 *)(puVar2 + 0x10) = 5;
  uVar3 = *(undefined8 *)PTR__kCFNetworkProxiesHTTPEnable_100995230;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puVar4 = PTR___sSSSHsWP_100995808;
  puVar5 = PTR___sSSN_1009957f8;
  puVar7 = PTR___sSSN_1009957f8;
  local_1d8 = uVar3;
  puStack_1d0 = puVar6;
  __ss11AnyHashableVyABxcSHRzlufC
            (puVar2 + 0x20,&local_1d8,PTR___sSSN_1009957f8,PTR___sSSSHsWP_100995808);
  puVar1 = PTR___sSiN_100995968;
  *(undefined **)(puVar2 + 0x60) = PTR___sSiN_100995968;
  *(undefined8 *)(puVar2 + 0x48) = 0;
  uVar3 = *(undefined8 *)PTR__kCFNetworkProxiesHTTPSEnable_100995248;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puVar8 = puVar5;
  local_1d8 = uVar3;
  puStack_1d0 = puVar7;
  __ss11AnyHashableVyABxcSHRzlufC(puVar2 + 0x68,&local_1d8,puVar5,puVar4);
  *(undefined **)(puVar2 + 0xa8) = puVar1;
  *(undefined8 *)(puVar2 + 0x90) = 0;
  uVar3 = *(undefined8 *)PTR__kCFNetworkProxiesSOCKSEnable_100995270;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puVar7 = puVar5;
  local_1d8 = uVar3;
  puStack_1d0 = puVar8;
  __ss11AnyHashableVyABxcSHRzlufC(puVar2 + 0xb0,&local_1d8,puVar5,puVar4);
  *(undefined **)(puVar2 + 0xf0) = puVar1;
  *(undefined8 *)(puVar2 + 0xd8) = 0;
  uVar3 = *(undefined8 *)PTR__kCFNetworkProxiesProxyAutoConfigEnable_100995260;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puVar8 = puVar5;
  local_1d8 = uVar3;
  puStack_1d0 = puVar7;
  __ss11AnyHashableVyABxcSHRzlufC(puVar2 + 0xf8,&local_1d8,puVar5,puVar4);
  *(undefined **)(puVar2 + 0x138) = puVar1;
  *(undefined8 *)(puVar2 + 0x120) = 0;
  uVar3 = *(undefined8 *)PTR__kCFNetworkProxiesProxyAutoDiscoveryEnable_100995268;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  local_1d8 = uVar3;
  puStack_1d0 = puVar8;
  __ss11AnyHashableVyABxcSHRzlufC(puVar2 + 0x140,&local_1d8,puVar5,puVar4);
  *(undefined **)(puVar2 + 0x180) = puVar1;
  *(undefined8 *)(puVar2 + 0x168) = 0;
  puVar4 = puVar2;
  FUN_1000cc410();
  _swift_setDeallocating(puVar2);
  puVar5 = &DAT_100a775c0;
  FUN_100004bb4(&DAT_100a775c0,&DAT_10080c1f0);
  _swift_arrayDestroy(puVar2 + 0x20,5,puVar5);
  DAT_100a79e00 = puVar4;
  return;
}

