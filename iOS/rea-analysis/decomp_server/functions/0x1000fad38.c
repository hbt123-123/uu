// rea decompile_all
// name: FUN_1000fad38
// address: 0x1000fad38
// body: available
// range: 0x1000fad38-0x1000faf2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_1000fad38(ID param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  ID IVar3;
  ID *pIVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined1 auStack_c0 [16];
  undefined8 local_b0;
  undefined8 uStack_a8;
  ID local_a0;
  ID IStack_98;
  ID local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long local_48;
  
  uVar1 = *(undefined8 *)PTR__NSAppleScriptErrorNumber_100995298;
  uVar5 = param_2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puVar2 = &local_80;
  local_80 = uVar1;
  uStack_78 = uVar5;
  __ss38_bridgeAnythingNonVerbatimToObjectiveCyyXlxnlF(puVar2,PTR___sSSN_1009957f8);
  IVar3 = _objc_msgSend(param_1,"__swift_objectForKeyedSubscript:",puVar2);
  _swift_unknownObjectRelease(puVar2);
  if (IVar3 == 0) {
    uStack_78 = 0;
    local_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&local_80,IVar3);
    _swift_unknownObjectRelease(IVar3);
  }
  uStack_58 = uStack_78;
  local_60 = local_80;
  local_48 = lStack_68;
  uStack_50 = uStack_70;
  if (lStack_68 == 0) {
    FUN_100040bb4(&local_60,&DAT_100a766e0,&DAT_10080bdb0);
LAB_1000faea0:
    IVar3 = 0;
  }
  else {
    pIVar4 = &local_88;
    _swift_dynamicCast(pIVar4,&local_60,PTR___sypN_100995e88 + 8,PTR___sSiN_100995968,6);
    if (((ulong)pIVar4 & 1) == 0) goto LAB_1000faea0;
    IVar3 = local_88;
    if (local_88 == 0xfffffffffffff931) {
      uVar5 = 0;
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)(uVar5);
      pcVar6 = FUN_1000fccfc;
      uVar5 = 0x94;
      local_a0 = param_1;
      goto LAB_1000faf0c;
    }
  }
  uVar5 = 0;
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)(uVar5);
  pcVar6 = FUN_1000fccf0;
  uVar5 = 0x97;
  local_a0 = IVar3;
  IStack_98 = param_1;
LAB_1000faf0c:
  local_b0 = param_2;
  uStack_a8 = param_3;
  FUN_1003fb4ec(pcVar6,auStack_c0,0xd0000000000000a2,0x80000001008898a0,0xd000000000000027,
                0x8000000100889f30,uVar5,0);
  return;
}

