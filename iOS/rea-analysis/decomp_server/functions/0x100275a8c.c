// rea decompile_all
// name: FUN_100275a8c
// address: 0x100275a8c
// body: available
// range: 0x100275a8c-0x100275bcf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100275a8c(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long unaff_x21;
  long lVar2;
  long alStack_68 [5];
  
  FUN_1000b142c(param_2,alStack_68);
  FUN_100275bd0();
  __s10Foundation11JSONEncoderC6encodeyAA4DataVxKSERzlFTj(alStack_68,&DAT_1009a8a98,param_2);
  if (unaff_x21 == 0) {
    lVar2 = -0x13ffffff9a8f86ac;
    __s10Foundation10URLRequestV8httpBodyAA4DataVSgvs();
    __s10Foundation10URLRequestV5value18forHTTPHeaderFieldSSSgSS_tF(0x2d746e65746e6f43);
    if (lVar2 == 0) {
      __s10Foundation10URLRequestV8setValue_18forHTTPHeaderFieldySSSg_SStF
                (&DAT_d000000000000010,0x80000001008a8820,0x2d746e65746e6f43,0xec00000065707954);
    }
    else {
      _swift_bridgeObjectRelease(lVar2);
    }
    FUN_100275c10(alStack_68);
    lVar2 = 0;
    __s10Foundation10URLRequestVMa();
    (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1);
  }
  else {
    plVar1 = alStack_68;
    FUN_100275c10();
    FUN_100262084();
    _swift_allocError(&DAT_1009a8e98,plVar1,0,0);
    *plVar1 = unaff_x21;
    plVar1[1] = 0;
    *(undefined1 *)(plVar1 + 2) = 4;
    _swift_willThrow();
  }
  return;
}

