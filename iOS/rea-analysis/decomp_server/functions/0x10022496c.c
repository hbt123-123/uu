// rea decompile_all
// name: FUN_10022496c
// address: 0x10022496c
// body: available
// range: 0x10022496c-0x100224b8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x000100224b20) */

undefined8 FUN_10022496c(void)

{
  ID IVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 local_90;
  ulong uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long local_48;
  
  local_60 = 0xd00000000000001f;
  uStack_58 = 0x80000001008a61a0;
  __sSS6appendyySSF();
  uVar4 = uStack_58;
  uVar2 = local_60;
  IVar1 = NSUserDefaults::standardUserDefaults
                    ((ID)&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar4);
  _swift_bridgeObjectRelease(uVar4);
  IVar1 = NSUserDefaults::objectForKey_(IVar1,"objectForKey:",uVar2);
  if (IVar1 == 0) {
    uStack_78 = 0;
    local_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&local_80,IVar1);
    _swift_unknownObjectRelease(IVar1);
  }
  uStack_58 = uStack_78;
  local_60 = local_80;
  local_48 = lStack_68;
  uStack_50 = uStack_70;
  if (lStack_68 == 0) {
    FUN_100224220(&local_60);
  }
  else {
    puVar3 = &local_90;
    _swift_dynamicCast(puVar3,&local_60,PTR___sypN_100995e88 + 8,
                       PTR___s10Foundation4DataVN_1009961e8,6);
    if (((ulong)puVar3 & 1) != 0) {
      uVar2 = local_90;
      uVar7 = uStack_88;
      FUN_100224420(local_90);
      if (uVar7 >> 0x3c < 0xf) {
        uVar4 = 0;
        __s10Foundation11JSONDecoderCMa();
        _swift_allocObject();
        __s10Foundation11JSONDecoderCACycfc();
        uVar5 = 0;
        FUN_10022b35c(0);
        puVar6 = &DAT_100a7e7c0;
        FUN_100005c90(&DAT_100a7e7c0,FUN_10022b35c,&TargetProtocolConformanceDescriptor_100813938);
        __s10Foundation11JSONDecoderC6decode_4fromxxm_AA4DataVtKSeRzlFTj
                  (&local_60,uVar5,uVar2,uVar7,uVar5,puVar6);
        FUN_100006cdc(local_90,uStack_88);
        FUN_100006cc8(uVar2,uVar7);
        _swift_release(uVar4);
        return local_60;
      }
      FUN_100006cdc(local_90,uStack_88);
    }
  }
  return 0;
}

