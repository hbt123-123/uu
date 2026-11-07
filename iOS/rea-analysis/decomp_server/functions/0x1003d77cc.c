// rea decompile_all
// name: FUN_1003d77cc
// address: 0x1003d77cc
// body: available
// range: 0x1003d77cc-0x1003d78b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001003d7854) */

void FUN_1003d77cc(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  long lVar2;
  code *UNRECOVERED_JUMPTABLE;
  long *unaff_x20;
  long lVar3;
  
  lVar3 = *unaff_x20;
  bVar1 = param_3 >> 0x3c < 0xf;
  if (bVar1) {
    lVar2 = *(long *)(lVar3 + 0xe0);
    FUN_100008184();
    __s10Foundation11JSONDecoderC6decode_4fromxxm_AA4DataVtKSeRzlFTj
              (param_1,lVar2,param_2,param_3,lVar2,*(undefined8 *)(lVar3 + 0xe8));
    FUN_100006cc8(param_2,param_3);
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar2 + -8) + 0x38);
  }
  else {
    lVar2 = *(long *)(lVar3 + 0xe0);
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar2 + -8) + 0x38);
  }
                    /* WARNING: Could not recover jumptable at 0x0001003d78b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,!bVar1,1,lVar2);
  return;
}

