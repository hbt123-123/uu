// rea decompile_all
// name: FUN_100671288
// address: 0x100671288
// body: available
// range: 0x100671288-0x1006713e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100671288(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  puVar2 = PTR___ss6UInt32VN_100995dc0;
  lVar1 = 8;
  __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ
            (8,PTR___ss6UInt32VN_100995dc0);
  *(undefined8 *)(lVar1 + 0x10) = 8;
  *(undefined8 *)(lVar1 + 0x28) = 0;
  *(undefined8 *)(lVar1 + 0x20) = 0;
  *(undefined8 *)(lVar1 + 0x38) = 0;
  *(undefined8 *)(lVar1 + 0x30) = 0;
  *(long *)(unaff_x20 + 0x20) = lVar1;
  lVar1 = 8;
  __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ(8,puVar2);
  *(undefined8 *)(lVar1 + 0x10) = 8;
  *(undefined8 *)(lVar1 + 0x28) = 0;
  *(undefined8 *)(lVar1 + 0x20) = 0;
  *(undefined8 *)(lVar1 + 0x38) = 0;
  *(undefined8 *)(lVar1 + 0x30) = 0;
  *(long *)(unaff_x20 + 0x28) = lVar1;
  *(undefined4 *)(unaff_x20 + 0x30) = 0;
  puVar2 = &DAT_100ab7cb8;
  FUN_100004bb4(&DAT_100ab7cb8,&DAT_100848cc0);
  _swift_initStaticObject();
  *(undefined **)(unaff_x20 + 0x38) = puVar2;
  lVar1 = 0;
  FUN_1006790a4();
  _swift_allocObject();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  *(long *)(lVar1 + 0x10) = param_1;
  *(undefined8 *)(lVar1 + 0x18) = uVar3;
  _swift_bridgeObjectRetain(param_1);
  _mlock(param_1 + 0x20,uVar3);
  *(long *)(unaff_x20 + 0x10) = lVar1;
  *(long *)(unaff_x20 + 0x18) = param_2;
  if (*(long *)(param_1 + 0x10) == 0x10) {
    if (param_2 == 0) {
      _swift_bridgeObjectRelease(param_1);
      return;
    }
    _swift_bridgeObjectRetain(param_2);
    _swift_bridgeObjectRelease(param_1);
    lVar1 = *(long *)(param_2 + 0x10);
    _swift_bridgeObjectRelease(param_2);
    param_1 = param_2;
    if (lVar1 == 8) {
      return;
    }
  }
  else {
    _swift_bridgeObjectRelease(param_1);
  }
  FUN_1006713e4();
  _swift_allocError(&DAT_1009e5690,param_1,0,0);
  _swift_willThrow();
  _swift_release();
  return;
}

