// rea decompile_all
// name: FUN_1007d5f94
// address: 0x1007d5f94
// body: available
// range: 0x1007d5f94-0x1007d6043 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1007d5f94(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  
  _swift_getObjectType();
  lVar1 = 0;
  __s10Foundation4UUIDVMa();
  lVar3 = *(long *)(lVar1 + -8);
  lVar2 = *(long *)(lVar3 + 0x40);
  __s10Foundation4UUIDVACycfC(&stack0xffffffffffffffb0 + -(lVar2 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(lVar3 + 0x20))
            (unaff_x20 + _TtC6Sentry8SentryId::id,
             &stack0xffffffffffffffb0 + -(lVar2 + 0xfU & 0xfffffffffffffff0),lVar1);
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffb0,"init");
  return;
}

