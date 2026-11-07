// rea decompile_all
// name: FUN_10064a7ac
// address: 0x10064a7ac
// body: available
// range: 0x10064a7ac-0x10064a8e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_10064a7ac(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long unaff_x21;
  undefined1 auStack_a0 [40];
  long local_78 [4];
  byte local_58;
  
  FUN_1000b142c(param_1,auStack_a0);
  FUN_10064a4d0(local_78,auStack_a0);
  if (unaff_x21 == 0) {
    if ((local_58 & 1) == 0) {
      FUN_10003f094(param_1);
      return local_78[0];
    }
    FUN_1006433f0(local_78);
    lVar3 = 0;
    __ss13DecodingErrorOMa();
    puVar4 = PTR___ss13DecodingErrorOs0B0sWP_100995b18;
    _swift_allocError();
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    unaff_x21 = param_1;
    FUN_10003f030(param_1,uVar1);
    __ss7DecoderP10codingPathSays9CodingKey_pGvgTj(uVar1,uVar2);
    __ss13DecodingErrorO7ContextV10codingPath16debugDescription010underlyingB0ADSays9CodingKey_pG_SSs0B0_pSgtcfC
              (puVar4);
    (**(code **)(*(long *)(lVar3 + -8) + 0x68))
              (puVar4,*(undefined4 *)
                       PTR___ss13DecodingErrorO13dataCorruptedyA2B7ContextVcABmFWC_100995b08,lVar3);
    _swift_willThrow();
  }
  FUN_10003f094(param_1);
  return unaff_x21;
}

