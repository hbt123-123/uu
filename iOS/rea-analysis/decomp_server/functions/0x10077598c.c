// rea decompile_all
// name: SentryBreadcrumb::hash
// address: 0x10077598c
// body: available
// range: 0x10077598c-0x100775aaf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

unsigned_long_long SentryBreadcrumb::hash(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  ID IVar7;
  
  IVar1 = objc_stub::level(param_1);
  IVar2 = objc_stub::FUN_1007e6840(param_1);
  IVar2 = objc_stub::hash(IVar2);
  IVar3 = objc_stub::timestamp(param_1);
  IVar3 = objc_stub::hash(IVar3);
  IVar4 = objc_stub::type(param_1);
  IVar4 = objc_stub::hash(IVar4);
  IVar5 = objc_stub::FUN_1007eee20(param_1);
  IVar5 = objc_stub::hash(IVar5);
  IVar6 = objc_stub::message(param_1);
  IVar6 = objc_stub::hash(IVar6);
  IVar7 = objc_stub::data(param_1);
  IVar7 = objc_stub::hash(IVar7);
  return IVar7 + (IVar6 + (IVar5 + (IVar4 + (IVar3 + (IVar2 + IVar1 * 0x17) * 0x17) * 0x17) * 0x17)
                          * 0x17) * 0x17 + 0xd7a09b9d7;
}

