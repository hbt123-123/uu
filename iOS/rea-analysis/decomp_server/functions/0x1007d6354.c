// rea decompile_all
// name: FUN_1007d6354
// address: 0x1007d6354
// body: available
// range: 0x1007d6354-0x1007d640b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

uint FUN_1007d6354(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  uint uVar3;
  long unaff_x20;
  long local_58;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = unaff_x20;
  _swift_getObjectType();
  FUN_1007d6c04(param_1,auStack_50,&DAT_100abce10);
  if (local_38 == 0) {
    FUN_1007c62b0(auStack_50,&DAT_100abce10);
  }
  else {
    plVar2 = &local_58;
    _swift_dynamicCast(plVar2,auStack_50,PTR___sypN_100995e88 + 8,lVar1,6);
    if (((ulong)plVar2 & 1) != 0) {
      lVar1 = local_58 + _TtC6Sentry8SentryId::id;
      __s10Foundation4UUIDV2eeoiySbAC_ACtFZ(lVar1,unaff_x20 + _TtC6Sentry8SentryId::id);
      uVar3 = (uint)lVar1;
      goto LAB_1007d63f4;
    }
  }
  uVar3 = 0;
LAB_1007d63f4:
  return uVar3 & 1;
}

