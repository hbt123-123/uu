// rea decompile_all
// name: FUN_1001d2d80
// address: 0x1001d2d80
// body: available
// range: 0x1001d2d80-0x1001d2e43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001001d2e00) */

undefined8 FUN_1001d2d80(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [16];
  undefined8 local_48;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    uVar3 = 0;
    __s10Foundation11JSONDecoderCMa();
    _swift_allocObject();
    __s10Foundation11JSONDecoderCACycfc();
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    uVar4 = uVar3;
    FUN_1001d3638();
    __s10Foundation11JSONDecoderC6decode_4fromxxm_AA4DataVtKSeRzlFTj
              (auStack_58,&DAT_1009a37e8,uVar1,uVar2,&DAT_1009a37e8,uVar4);
    _swift_release(uVar3);
    return local_48;
  }
  return 0;
}

