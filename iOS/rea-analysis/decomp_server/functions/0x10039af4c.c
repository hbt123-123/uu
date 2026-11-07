// rea decompile_all
// name: FUN_10039af4c
// address: 0x10039af4c
// body: available
// range: 0x10039af4c-0x10039b0ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10039afcc to 0x1007dea28 _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x00010039b010) */
/* WARNING: Removing unreachable block (ram,0x00010039b028) */

undefined1 * FUN_10039af4c(ulong param_1)

{
  undefined8 uVar1;
  ID IVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  long unaff_x20;
  undefined1 local_41;
  
  local_41 = (undefined1)param_1;
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  FUN_10039a968();
  if ((param_1 & 1) == 0) {
    uVar3 = 0;
    __s10Foundation11JSONEncoderCMa();
    _swift_allocObject();
    __s10Foundation11JSONEncoderCACycfc();
    puVar6 = &local_41;
    puVar7 = PTR___sSbN_1009958c8;
    __s10Foundation11JSONEncoderC6encodeyAA4DataVxKSERzlFTj
              (puVar6,PTR___sSbN_1009958c8,PTR___sSbSEsWP_1009958d0);
    _swift_release(uVar3);
    IVar2 = *(ID *)(unaff_x20 + 0x10);
    if (IVar2 == 0) {
      FUN_100006cdc(puVar6,puVar7);
    }
    else {
      puVar4 = puVar6;
      __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(puVar6,puVar7);
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar5,uVar1);
      _objc_msgSend(IVar2,"setData:forKey:",puVar4,uVar5);
      FUN_100006cdc(puVar6,puVar7);
      puVar6 = (undefined1 *)0x0;
    }
  }
  else {
    IVar2 = *(ID *)(unaff_x20 + 0x10);
    puVar6 = (undefined1 *)0x0;
    if (IVar2 != 0) {
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar5,uVar1);
      _objc_msgSend(IVar2,"removeValueForKey:",uVar5);
      return (undefined1 *)0x0;
    }
  }
  return puVar6;
}

