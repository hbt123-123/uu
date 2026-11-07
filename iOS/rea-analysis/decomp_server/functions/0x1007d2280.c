// rea decompile_all
// name: FUN_1007d2280
// address: 0x1007d2280
// body: available
// range: 0x1007d2280-0x1007d2623 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_1007d2280(ID param_1)

{
  ulong uVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar5 = PTR___swiftEmptyArrayStorage_100995ea0;
  if (param_1 != 0) {
    IVar2 = _objc_msgSend(param_1,"enableCaptureFailedRequests");
    puVar5 = PTR___swiftEmptyArrayStorage_100995ea0;
    if ((int)IVar2 != 0) {
      puVar3 = (undefined *)0x0;
      FUN_100033898(0,1,1,PTR___swiftEmptyArrayStorage_100995ea0);
      uVar1 = *(ulong *)(puVar3 + 0x10);
      puVar5 = puVar3;
      if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar1) {
        puVar5 = (undefined *)(ulong)(1 < *(ulong *)(puVar3 + 0x18));
        FUN_100033898(puVar5,uVar1 + 1,1,puVar3);
      }
      *(ulong *)(puVar5 + 0x10) = uVar1 + 1;
      *(undefined8 *)(puVar5 + uVar1 * 0x10 + 0x20) = 0xd000000000000015;
      *(undefined8 *)(puVar5 + uVar1 * 0x10 + 0x28) = 0x80000001008dbc10;
    }
    IVar2 = _objc_msgSend(param_1,"enablePerformanceV2");
    if ((int)IVar2 != 0) {
      puVar3 = puVar5;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar4 = puVar5;
      if (((ulong)puVar3 & 1) == 0) {
        puVar4 = (undefined *)0x0;
        FUN_100033898(0,*(long *)(puVar5 + 0x10) + 1,1,puVar5);
      }
      uVar1 = *(ulong *)(puVar4 + 0x10);
      puVar5 = puVar4;
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar1) {
        puVar5 = (undefined *)(ulong)(1 < *(ulong *)(puVar4 + 0x18));
        FUN_100033898(puVar5,uVar1 + 1,1,puVar4);
      }
      *(ulong *)(puVar5 + 0x10) = uVar1 + 1;
      *(undefined8 *)(puVar5 + uVar1 * 0x10 + 0x20) = 0x616d726f66726570;
      *(undefined8 *)(puVar5 + uVar1 * 0x10 + 0x28) = 0xed0000325665636e;
    }
    IVar2 = _objc_msgSend(param_1,"enableTimeToFullDisplayTracing");
    if ((int)IVar2 != 0) {
      puVar3 = puVar5;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar4 = puVar5;
      if (((ulong)puVar3 & 1) == 0) {
        puVar4 = (undefined *)0x0;
        FUN_100033898(0,*(long *)(puVar5 + 0x10) + 1,1,puVar5);
      }
      uVar1 = *(ulong *)(puVar4 + 0x10);
      puVar5 = puVar4;
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar1) {
        puVar5 = (undefined *)(ulong)(1 < *(ulong *)(puVar4 + 0x18));
        FUN_100033898(puVar5,uVar1 + 1,1,puVar4);
      }
      *(ulong *)(puVar5 + 0x10) = uVar1 + 1;
      *(undefined1 **)(puVar5 + uVar1 * 0x10 + 0x20) = &DAT_d000000000000018;
      *(undefined8 *)(puVar5 + uVar1 * 0x10 + 0x28) = 0x80000001008dbbf0;
    }
    IVar2 = _objc_msgSend(param_1,"enableAppLaunchProfiling");
    if ((int)IVar2 != 0) {
      puVar3 = puVar5;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar4 = puVar5;
      if (((ulong)puVar3 & 1) == 0) {
        puVar4 = (undefined *)0x0;
        FUN_100033898(0,*(long *)(puVar5 + 0x10) + 1,1,puVar5);
      }
      uVar1 = *(ulong *)(puVar4 + 0x10);
      puVar5 = puVar4;
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar1) {
        puVar5 = (undefined *)(ulong)(1 < *(ulong *)(puVar4 + 0x18));
        FUN_100033898(puVar5,uVar1 + 1,1,puVar4);
      }
      *(ulong *)(puVar5 + 0x10) = uVar1 + 1;
      *(undefined8 *)(puVar5 + uVar1 * 0x10 + 0x20) = 0xd000000000000012;
      *(undefined8 *)(puVar5 + uVar1 * 0x10 + 0x28) = 0x80000001008dbbd0;
    }
    IVar2 = _objc_msgSend(param_1,"swiftAsyncStacktraces");
    if ((int)IVar2 != 0) {
      puVar3 = puVar5;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar4 = puVar5;
      if (((ulong)puVar3 & 1) == 0) {
        puVar4 = (undefined *)0x0;
        FUN_100033898(0,*(long *)(puVar5 + 0x10) + 1,1,puVar5);
      }
      uVar1 = *(ulong *)(puVar4 + 0x10);
      puVar5 = puVar4;
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar1) {
        puVar5 = (undefined *)(ulong)(1 < *(ulong *)(puVar4 + 0x18));
        FUN_100033898(puVar5,uVar1 + 1,1,puVar4);
      }
      *(ulong *)(puVar5 + 0x10) = uVar1 + 1;
      *(undefined8 *)(puVar5 + uVar1 * 0x10 + 0x20) = 0xd000000000000015;
      *(undefined8 *)(puVar5 + uVar1 * 0x10 + 0x28) = 0x80000001008dbbb0;
    }
    IVar2 = _objc_msgSend(param_1,"enablePersistingTracesWhenCrashing");
    if ((int)IVar2 != 0) {
      puVar3 = puVar5;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar4 = puVar5;
      if (((ulong)puVar3 & 1) == 0) {
        puVar4 = (undefined *)0x0;
        FUN_100033898(0,*(long *)(puVar5 + 0x10) + 1,1,puVar5);
      }
      uVar1 = *(ulong *)(puVar4 + 0x10);
      puVar5 = puVar4;
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar1) {
        puVar5 = (undefined *)(ulong)(1 < *(ulong *)(puVar4 + 0x18));
        FUN_100033898(puVar5,uVar1 + 1,1,puVar4);
      }
      *(ulong *)(puVar5 + 0x10) = uVar1 + 1;
      *(undefined8 *)(puVar5 + uVar1 * 0x10 + 0x20) = 0xd00000000000001c;
      *(undefined8 *)(puVar5 + uVar1 * 0x10 + 0x28) = 0x80000001008dbb90;
    }
  }
  return puVar5;
}

