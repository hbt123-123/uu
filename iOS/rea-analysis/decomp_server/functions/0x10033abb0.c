// rea decompile_all
// name: FUN_10033abb0
// address: 0x10033abb0
// body: available
// range: 0x10033abb0-0x10033ae97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined *
FUN_10033abb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined1 *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  
  local_78 = 0;
  local_70 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x14);
  _swift_bridgeObjectRelease(local_70);
  local_78 = 0xd000000000000011;
  local_70 = 0x80000001008ab1d0;
  __sSS6appendyySSF(param_1,param_2);
  __sSS6appendyySSF(0x22,0xe100000000000000);
  if (param_4 != 0) {
    __sSS6appendyySSF(param_3,param_4);
    __sSS6appendyySSF(0x22,0xe100000000000000);
    __sSS6appendyySSF(0x616e656c6966203b,0xec000000223d656d);
    _swift_bridgeObjectRelease(0xec000000223d656d);
  }
  uVar2 = local_70;
  uVar1 = local_78;
  puVar7 = PTR___swiftEmptyArrayStorage_100995ea0;
  uVar8 = 0;
  local_98 = &DAT_d000000000000013;
  uStack_90 = 0x80000001008a98b0;
  local_88 = local_78;
  uStack_80 = local_70;
  _swift_bridgeObjectRetain(0x80000001008a98b0);
  _swift_bridgeObjectRetain(uVar2);
  puVar4 = &DAT_d000000000000013;
  FUN_1002bbc2c(&DAT_d000000000000013,0x80000001008a98b0,puVar7);
  if ((uVar8 & 1) == 0) {
    puVar5 = &DAT_100a833e8;
    FUN_100004bb4(&DAT_100a833e8,&DAT_1008178c0);
    _swift_initStackObject();
    *(undefined8 *)(puVar5 + 0x18) = 2;
    *(undefined8 *)(puVar5 + 0x10) = 1;
    *(undefined1 **)(puVar5 + 0x20) = &DAT_d000000000000013;
    *(undefined8 *)(puVar5 + 0x28) = 0x80000001008a98b0;
    *(undefined8 *)(puVar5 + 0x30) = uVar1;
    *(undefined8 *)(puVar5 + 0x38) = uVar2;
    if (SCARRY8((long)puVar4,1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10033ae98);
      (*pcVar3)();
    }
    _swift_bridgeObjectRetain(0x80000001008a98b0);
    _swift_bridgeObjectRetain(uVar2);
    FUN_1002c0f64(puVar4,puVar4 + 1,puVar5);
    _swift_setDeallocating(puVar5);
    _swift_arrayDestroy(puVar5 + 0x20,*(undefined8 *)(puVar5 + 0x10),&DAT_1009ad080);
    _swift_bridgeObjectRelease(uVar2);
    _swift_bridgeObjectRelease(0x80000001008a98b0);
  }
  else {
    _swift_bridgeObjectRetain(0x80000001008a98b0);
    _swift_bridgeObjectRetain(uVar2);
    puVar5 = puVar7;
    _swift_isUniquelyReferenced_nonNull_native();
    puVar6 = puVar7;
    if (((ulong)puVar5 & 1) == 0) {
      puVar6 = (undefined *)0x0;
      FUN_1002966ec(0,*(long *)(puVar7 + 0x10) + 1,1,puVar7);
    }
    uVar8 = *(ulong *)(puVar6 + 0x10);
    puVar7 = puVar6;
    if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar8) {
      puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
      FUN_1002966ec(puVar7,uVar8 + 1,1,puVar6);
    }
    *(ulong *)(puVar7 + 0x10) = uVar8 + 1;
    *(undefined1 **)(puVar7 + uVar8 * 0x20 + 0x20) = &DAT_d000000000000013;
    *(undefined8 *)(puVar7 + uVar8 * 0x20 + 0x28) = 0x80000001008a98b0;
    *(undefined8 *)(puVar7 + uVar8 * 0x20 + 0x30) = uVar1;
    *(undefined8 *)(puVar7 + uVar8 * 0x20 + 0x38) = uVar2;
    _swift_bridgeObjectRelease(uVar2);
    _swift_bridgeObjectRelease(0x80000001008a98b0);
  }
  FUN_10033b2cc(&local_98);
  if (param_6 != 0) {
    _swift_bridgeObjectRetain(param_6);
    FUN_1002bba74(0x2d746e65746e6f43,0xec00000065707954,param_5,param_6);
    _swift_bridgeObjectRelease(param_6);
  }
  return puVar7;
}

