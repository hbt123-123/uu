// rea decompile_all
// name: FUN_100265644
// address: 0x100265644
// body: available
// range: 0x100265644-0x100265833 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_100265644(long param_1,long param_2,uint param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [8];
  long lStack_80;
  undefined1 auStack_70 [8];
  long local_68;
  long lStack_60;
  undefined *local_50;
  undefined *local_48;
  
  puVar1 = PTR___swiftEmptyArrayStorage_100995ea0;
  FUN_100264d0c();
  puVar2 = *(undefined **)PTR__NSLocalizedDescriptionKey_100995300;
  local_48 = puVar1;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(puVar2);
  lVar3 = param_1;
  lVar6 = param_2;
  FUN_100265484();
  if (lVar6 == 0) {
    FUN_100265848(&local_68,puVar2,param_2);
    _swift_bridgeObjectRelease(param_2);
    puVar2 = &DAT_100a81320;
    FUN_100040bb4(&local_68,&DAT_100a81320,&DAT_1008153f0);
  }
  else {
    local_50 = PTR___sSSN_1009957f8;
    local_68 = lVar3;
    lStack_60 = lVar6;
    thunk_FUN_10007f3d4(&local_68,auStack_a8);
    puVar4 = puVar1;
    _swift_isUniquelyReferenced_nonNull_native(puVar1);
    FUN_1002659c8(auStack_a8,puVar2,param_2,puVar4);
    _swift_bridgeObjectRelease(param_2);
    local_48 = puVar1;
  }
  uVar5 = *(undefined8 *)PTR__NSUnderlyingErrorKey_100995328;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(uVar5);
  if (((1 << (ulong)(param_3 & 0x1f) & 0xa7U) == 0) && (_swift_errorRetain(param_1), param_1 != 0))
  {
    _swift_getErrorValue(param_1,auStack_70,local_88);
    local_50 = (undefined *)lStack_80;
    FUN_1000efc08(&local_68);
    (**(code **)(*(long *)(lStack_80 + -8) + 0x10))();
    _swift_errorRelease(param_1);
    thunk_FUN_10007f3d4(&local_68,auStack_a8);
    puVar1 = local_48;
    puVar4 = local_48;
    _swift_isUniquelyReferenced_nonNull_native(local_48);
    FUN_1002659c8(auStack_a8,uVar5,puVar2,puVar4);
    _swift_bridgeObjectRelease(puVar2);
    local_48 = puVar1;
  }
  else {
    FUN_100265848(&local_68,uVar5,puVar2);
    _swift_bridgeObjectRelease(puVar2);
    FUN_100040bb4(&local_68,&DAT_100a81320,&DAT_1008153f0);
  }
  return local_48;
}

