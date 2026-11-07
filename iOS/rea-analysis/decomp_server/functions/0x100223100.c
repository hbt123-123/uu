// rea decompile_all
// name: FUN_100223100
// address: 0x100223100
// body: available
// range: 0x100223100-0x1002233f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10022334c to 0x100006cdc FUN_100006cdc (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1002233c4 to 0x1007dea28 _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x0001002231c0) */
/* WARNING: Removing unreachable block (ram,0x0001002232f0) */
/* WARNING: Removing unreachable block (ram,0x000100223208) */

undefined * FUN_100223100(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  ID IVar1;
  ID self;
  undefined *puVar2;
  ID IVar3;
  char *pcVar4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  if (DAT_100a7ddd8 != -1) {
    _swift_once(&DAT_100a7ddd8,FUN_1002230c8);
  }
  IVar1 = DAT_100a7e490;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_2,param_3);
  pcVar4 = "dataForKey:";
  IVar1 = _objc_msgSend(IVar1,"dataForKey:",param_2);
  if (IVar1 != 0) {
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
    _objc_allocWithZone(&_OBJC_CLASS___NSKeyedUnarchiver);
    FUN_100008184(IVar1,pcVar4);
    self = IVar1;
    FUN_100223418(IVar1,pcVar4);
    FUN_100006cdc(IVar1,pcVar4);
    _objc_msgSend(self,"setRequiresSecureCoding:",0);
    IVar3 = _objc_msgSend(self,"decodeObjectForKey:",
                          *(undefined8 *)PTR__NSKeyedArchiveRootObjectKey_1009952f8);
    if (IVar3 == 0) {
      uStack_a8 = 0;
      local_b0 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&local_b0);
      _swift_unknownObjectRelease(IVar3);
    }
    _objc_msgSend(self,"finishDecoding");
    puVar2 = &DAT_100a7e460;
    FUN_100004bb4(&DAT_100a7e460,&DAT_1008134b8);
    param_1[3] = puVar2;
    puVar2 = &DAT_1009a5d08;
    _swift_allocObject(&DAT_1009a5d08,0x30,7);
    *param_1 = puVar2;
    *(undefined8 *)(puVar2 + 0x18) = uStack_a8;
    *(undefined8 *)(puVar2 + 0x10) = local_b0;
    *(undefined8 *)(puVar2 + 0x28) = uStack_98;
    *(undefined8 *)(puVar2 + 0x20) = uStack_a0;
    FUN_100006cdc(IVar1,pcVar4);
    return (undefined *)0x0;
  }
  puVar2 = &DAT_100a7e460;
  FUN_100004bb4(&DAT_100a7e460,&DAT_1008134b8);
  param_1[3] = puVar2;
  puVar2 = &DAT_1009a5d08;
  _swift_allocObject(&DAT_1009a5d08,0x30,7);
  *param_1 = puVar2;
  *(undefined8 *)(puVar2 + 0x18) = 0;
  *(undefined8 *)(puVar2 + 0x10) = 0;
  *(undefined8 *)(puVar2 + 0x28) = 0;
  *(undefined8 *)(puVar2 + 0x20) = 0;
  return puVar2;
}

