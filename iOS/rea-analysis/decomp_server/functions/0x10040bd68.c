// rea decompile_all
// name: FUN_10040bd68
// address: 0x10040bd68
// body: available
// range: 0x10040bd68-0x10040c077 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10040c074 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 * FUN_10040bd68(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long unaff_x21;
  ulong uVar6;
  undefined1 *puVar7;
  undefined1 auStack_90 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_1009954a0;
  uStack_68 = param_2[1];
  uStack_70 = *param_2;
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  uStack_78 = param_2[5];
  local_80 = param_2[4];
  uVar6 = (1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f)) + 0x3fU >> 6;
  puVar7 = (undefined1 *)(uVar6 * 8);
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 0xe) {
    FUN_100102fb4(&uStack_70,auStack_90);
    _swift_bridgeObjectRetain(uVar2);
    FUN_100102fb4(&local_80,auStack_90);
    FUN_100102fb4(&uStack_70,auStack_90);
    _swift_bridgeObjectRetain(uVar2);
    FUN_100102fb4(&local_80,auStack_90);
LAB_10040be10:
    (*(code *)PTR____chkstk_darwin_100995498)();
    puVar5 = auStack_90 + -((ulong)(puVar7 + 0xf) & 0x3ffffffffffffff0);
    _bzero(puVar5,(size_t)puVar7);
    FUN_100102fb4(&uStack_70,auStack_90);
    _swift_bridgeObjectRetain(uVar2);
    FUN_100102fb4(&local_80,auStack_90);
    FUN_10040bbe0(puVar5,uVar6,param_1,uVar1,uVar2);
    FUN_1000a9ec8(&uStack_70);
    _swift_bridgeObjectRelease(uVar2);
    FUN_1000a9ec8(&local_80);
    if (unaff_x21 == 0) {
LAB_10040c008:
      FUN_1000a9ec8(&uStack_70);
      _swift_bridgeObjectRelease(uVar2);
      FUN_1000a9ec8(&local_80);
      FUN_1000a9ec8(&uStack_70);
      _swift_bridgeObjectRelease(uVar2);
      FUN_1000a9ec8(&local_80);
      goto LAB_10040c038;
    }
    _swift_willThrow();
  }
  else {
    uVar3 = 0;
    __ss042_stdlib_isOSVersionAtLeastOrVariantVersiondE0yBi1_Bw_BwBwBwBwBwtF(0xc,3,0,0xf,4,0);
    if ((uVar3 & 1) == 0) {
      FUN_100102fb4(&uStack_70,auStack_90);
      _swift_bridgeObjectRetain(uVar2);
      FUN_100102fb4(&local_80,auStack_90);
      FUN_100102fb4(&uStack_70,auStack_90);
      _swift_bridgeObjectRetain(uVar2);
      FUN_100102fb4(&local_80,auStack_90);
    }
    else {
      FUN_100102fb4(&uStack_70,auStack_90);
      _swift_bridgeObjectRetain(uVar2);
      FUN_100102fb4(&local_80,auStack_90);
      FUN_100102fb4(&uStack_70,auStack_90);
      _swift_bridgeObjectRetain(uVar2);
      FUN_100102fb4(&local_80,auStack_90);
      puVar4 = puVar7;
      _swift_stdlib_isStackAllocationSafe(puVar7,8);
      if (((ulong)puVar4 & 1) != 0) goto LAB_10040be10;
    }
    puVar4 = puVar7;
    _swift_slowAlloc(puVar7,0xffffffffffffffff);
    _bzero(puVar4,(size_t)puVar7);
    FUN_100102fb4(&uStack_70,auStack_90);
    _swift_bridgeObjectRetain(uVar2);
    FUN_100102fb4(&local_80,auStack_90);
    puVar5 = puVar4;
    FUN_10040a5dc(puVar4,uVar6,param_1,param_2);
    _swift_slowDealloc(puVar4,0xffffffffffffffff,0xffffffffffffffff);
    if (unaff_x21 == 0) goto LAB_10040c008;
  }
  FUN_1000a9ec8(&uStack_70);
  _swift_bridgeObjectRelease(uVar2);
  FUN_1000a9ec8(&local_80);
  FUN_1000a9ec8(&uStack_70);
  _swift_bridgeObjectRelease(uVar2);
  FUN_1000a9ec8(&local_80);
LAB_10040c038:
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_58) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return puVar5;
}

