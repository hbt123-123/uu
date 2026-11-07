// rea decompile_all
// name: FUN_1000a623c
// address: 0x1000a623c
// body: available
// range: 0x1000a623c-0x1000a630f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000a62bc to 0x1000c1d30 _$sSS4hash4intoys6HasherVz_tF (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000a623c(undefined8 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *unaff_x20;
  
  __sSS4hash4intoys6HasherVz_tF(param_1,*unaff_x20,unaff_x20[1]);
  __sSS4hash4intoys6HasherVz_tF(param_1,unaff_x20[2],unaff_x20[3]);
  uVar1 = unaff_x20[6];
  uVar3 = unaff_x20[7];
  if (((uVar1 & uVar3 ^ 0xffffffffffffffff) & 0xf000000000000007) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar2 = unaff_x20[4];
    lVar4 = unaff_x20[5];
    __ss6HasherV8_combineyys5UInt8VF(1);
    if (-1 < (long)uVar3) {
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar2,lVar4);
      return;
    }
    if (lVar4 == 0) {
      __ss6HasherV8_combineyys5UInt8VF(0);
    }
    else {
      __ss6HasherV8_combineyys5UInt8VF(1);
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar2,lVar4);
    }
    __ss6HasherV8_combineyySuF(uVar1);
  }
  return;
}

