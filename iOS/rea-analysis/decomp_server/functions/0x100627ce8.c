// rea decompile_all
// name: FUN_100627ce8
// address: 0x100627ce8
// body: available
// range: 0x100627ce8-0x100627e4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_100627ce8(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar8 = *(ulong *)(param_3 + 0x10);
  puVar5 = (undefined *)((ulong)(uint)-(int)uVar8 & 0xf);
  uVar7 = *(ulong *)(param_2 + 0x10);
  puVar6 = (undefined *)((ulong)(uint)-(int)uVar7 & 0xf);
  _swift_bridgeObjectRetain(param_3);
  puVar3 = PTR___swiftEmptyArrayStorage_100995ea0;
  if ((-(int)uVar8 & 0xfU) != 0) {
    puVar3 = puVar5;
    __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ
              (puVar5,PTR___ss5UInt8VN_100995d40);
    *(undefined **)(puVar3 + 0x10) = puVar5;
    _bzero(puVar3 + 0x20,(size_t)puVar5);
  }
  FUN_100628ae0(puVar3);
  _swift_bridgeObjectRetain(param_2);
  FUN_100628ae0();
  puVar3 = PTR___swiftEmptyArrayStorage_100995ea0;
  if ((-(int)uVar7 & 0xfU) != 0) {
    puVar3 = puVar6;
    __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ
              (puVar6,PTR___ss5UInt8VN_100995d40);
    *(undefined **)(puVar3 + 0x10) = puVar6;
    _bzero(puVar3 + 0x20,(size_t)puVar6);
  }
  FUN_100628ae0(puVar3);
  uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
  uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
  FUN_10063a23c(8,uVar8 >> 0x20 | uVar8 << 0x20);
  FUN_100628ae0();
  uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
  uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
  FUN_10063a23c(8,uVar7 >> 0x20 | uVar7 << 0x20);
  FUN_100628ae0();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(long *)(param_1 + 0x20);
  FUN_10003f030(param_1,uVar1);
  lVar4 = param_3;
  (**(code **)(lVar2 + 8))(param_3,uVar1,lVar2);
  _swift_bridgeObjectRelease(param_3);
  return lVar4;
}

