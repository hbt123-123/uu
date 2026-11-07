// rea decompile_all
// name: FUN_10033a5c4
// address: 0x10033a5c4
// body: available
// range: 0x10033a5c4-0x10033a71b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10033a5c4(long param_1,ulong param_2,undefined8 param_3)

{
  uint uVar1;
  code *pcVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  int iVar6;
  undefined *puVar7;
  uint uVar8;
  undefined *local_48;
  
  uVar1 = (uint)(param_2 >> 0x20);
  uVar8 = uVar1 >> 0x1e;
  iVar6 = (int)param_1;
  iVar4 = (int)((ulong)param_1 >> 0x20);
  puVar3 = PTR___swiftEmptyArrayStorage_100995ea0;
  if (uVar1 >> 0x1e < 2) {
    if (uVar8 != 0) {
      if (SBORROW4(iVar4,iVar6)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10033a718);
        (*pcVar2)();
      }
      puVar7 = (undefined *)(long)(iVar4 - iVar6);
      goto LAB_10033a62c;
    }
    puVar7 = (undefined *)(param_2 >> 0x30 & 0xff);
  }
  else {
    if (uVar8 != 2) {
      uVar5 = 0;
      goto LAB_10033a6b0;
    }
    puVar7 = (undefined *)(*(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10));
    if (SBORROW8(*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x10))) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10033a61c);
      (*pcVar2)();
    }
LAB_10033a62c:
    if ((long)puVar7 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10033a714);
      (*pcVar2)();
    }
  }
  if (puVar7 != (undefined *)0x0) {
    puVar3 = puVar7;
    __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ
              (puVar7,PTR___ss5UInt8VN_100995d40);
    *(undefined **)(puVar3 + 0x10) = puVar7;
    _bzero(puVar3 + 0x20,(size_t)puVar7);
  }
  if (uVar8 == 2) {
    uVar5 = *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10);
    if (SBORROW8(*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x10))) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10033a69c);
      (*pcVar2)();
    }
  }
  else if (uVar8 == 1) {
    if (SBORROW4(iVar4,iVar6)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10033a71c);
      (*pcVar2)();
    }
    uVar5 = (ulong)(iVar4 - iVar6);
  }
  else {
    uVar5 = param_2 >> 0x30 & 0xff;
  }
LAB_10033a6b0:
  local_48 = puVar3;
  _swift_bridgeObjectRetain(puVar3);
  __s10Foundation4DataV9copyBytes2to5countySpys5UInt8VG_SitF(puVar3 + 0x20,uVar5,param_1,param_2);
  _swift_bridgeObjectRelease(puVar3);
  FUN_10033a3cc(&local_48,param_3);
  _swift_bridgeObjectRelease(local_48);
  return;
}

