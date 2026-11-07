// rea decompile_all
// name: FUN_1007bd874
// address: 0x1007bd874
// body: available
// range: 0x1007bd874-0x1007bdbf3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001007bd968) */
/* WARNING: Removing unreachable block (ram,0x0001007bdb4c) */
/* WARNING: Removing unreachable block (ram,0x0001007bd934) */
/* WARNING: Removing unreachable block (ram,0x0001007bdb28) */
/* WARNING: Removing unreachable block (ram,0x0001007bd99c) */
/* WARNING: Removing unreachable block (ram,0x0001007bdb70) */
/* WARNING: Removing unreachable block (ram,0x0001007bda14) */
/* WARNING: Removing unreachable block (ram,0x0001007bdb84) */
/* WARNING: Removing unreachable block (ram,0x0001007bda38) */
/* WARNING: Removing unreachable block (ram,0x0001007bdba0) */
/* WARNING: Removing unreachable block (ram,0x0001007bd900) */

ID FUN_1007bd874(ID param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *self;
  ID IVar3;
  long unaff_x21;
  undefined1 auStack_88 [24];
  undefined8 local_70;
  undefined8 uStack_68;
  
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  IVar3 = param_1;
  FUN_10003f030(param_1,uVar2);
  __ss7DecoderP20singleValueContainers06Singlec8DecodingD0_pyKFTj(auStack_88,uVar2,uVar1);
  if (unaff_x21 == 0) {
    FUN_10003f030(auStack_88,local_70);
    uVar2 = local_70;
    __ss28SingleValueDecodingContainerP6decodeyS2imKFTj(local_70,uStack_68);
    self = &_OBJC_CLASS___NSNumber;
    _objc_allocWithZone();
    IVar3 = _objc_msgSend((ID)self,"initWithInteger:",uVar2);
    FUN_10003f094(auStack_88);
    FUN_10003f094(param_1);
  }
  else {
    FUN_10003f094(param_1);
  }
  return IVar3;
}

