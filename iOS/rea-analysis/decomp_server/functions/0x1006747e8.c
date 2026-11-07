// rea decompile_all
// name: FUN_1006747e8
// address: 0x1006747e8
// body: available
// range: 0x1006747e8-0x1006748ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006747e8(byte param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 uVar3;
  long unaff_x20;
  long lVar4;
  ulong uVar5;
  
  puVar1 = &DAT_100ab7cc8;
  FUN_100004bb4(&DAT_100ab7cc8,&DAT_100848c30);
  _swift_initStaticObject();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  *(undefined **)(unaff_x20 + 0x30) = PTR___swiftEmptyArrayStorage_100995ea0;
  if (param_1 < 7) {
    uVar5 = *(ulong *)(&DAT_10084cc20 + (ulong)param_1 * 8);
  }
  else {
    uVar5 = 0x48;
  }
  lVar4 = 100 - (uVar5 >> 1);
  *(ulong *)(unaff_x20 + 0x18) = uVar5;
  *(long *)(unaff_x20 + 0x20) = lVar4;
  uVar3 = 6;
  if ((param_1 & 0xfc) != 0) {
    uVar3 = 1;
  }
  *(undefined1 *)(unaff_x20 + 0x28) = uVar3;
  lVar2 = lVar4;
  __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ
            (lVar4,PTR___ss6UInt64VN_100995e10);
  *(long *)(lVar2 + 0x10) = lVar4;
  _bzero((void *)(lVar2 + 0x20),uVar5 * -4 + 800);
  *(long *)(unaff_x20 + 0x38) = lVar2;
  return;
}

