// rea decompile_all
// name: SentryCrashDoctor::cpuFamily:
// address: 0x10075ae88
// body: available
// range: 0x10075ae88-0x10075af53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

int SentryCrashDoctor::cpuFamily_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  int iVar3;
  
  IVar1 = objc_stub::FUN_1007f6cc0(param_1);
  IVar1 = objc_stub::objectForKey_(IVar1,&cf_cpu_arch);
  IVar2 = objc_stub::rangeOfString_(IVar1,&cf_arm);
  if (IVar2 == 0) {
    iVar3 = 1;
  }
  else {
    IVar2 = objc_stub::rangeOfString_(IVar1,&cf_i);
    if ((IVar2 == 0) && (IVar2 = objc_stub::rangeOfString_(IVar1,&cf_86), IVar2 == 2)) {
      iVar3 = 2;
    }
    else {
      IVar1 = objc_stub::rangeOfString_options_(IVar1,&cf_x86_64,1);
      iVar3 = 0;
      if (IVar1 != 0x7fffffffffffffff) {
        iVar3 = 3;
      }
    }
  }
  return iVar3;
}

