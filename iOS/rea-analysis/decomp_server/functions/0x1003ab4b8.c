// rea decompile_all
// name: FUN_1003ab4b8
// address: 0x1003ab4b8
// body: available
// range: 0x1003ab4b8-0x1003ab577 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003ab4b8(long *param_1)

{
  code *pcVar1;
  long lVar2;
  
  FUN_1003ab60c();
  _swift_allocObject();
  lVar2 = *param_1;
  _swift_conformsToProtocol(lVar2,&TargetProtocolDescriptor_1008fc5fc);
  if (lVar2 != 0) {
    DAT_100b367b0 = param_1;
    DAT_100b367b8 = lVar2;
    return;
  }
  _swift_release(param_1);
  __s10Foundation5NSLogyySS_s7CVarArg_pdtF
            (0xd000000000000038,0x80000001008b36a0,PTR___swiftEmptyArrayStorage_100995ea0);
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0xd000000000000038,0x80000001008b36a0,"UUCommon/Api.swift",0x12,2,
             0x17,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1003ab578);
  (*pcVar1)();
}

