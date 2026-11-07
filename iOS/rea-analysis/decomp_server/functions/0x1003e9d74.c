// rea decompile_all
// name: FUN_1003e9d74
// address: 0x1003e9d74
// body: available
// range: 0x1003e9d74-0x1003e9efb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003e9d74(undefined8 param_1,code *param_2,undefined8 param_3,code *param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x12;
  undefined1 *puVar5;
  code *pcVar6;
  long lVar7;
  
  lVar2 = 0;
  __sSo18OS_dispatch_sourceC8DispatchE15FileSystemEventVMa();
  puVar1 = PTR___sSo18OS_dispatch_sourceC8DispatchE15FileSystemEventVMa_100995fc8;
  lVar7 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar7 + 0x40));
  puVar5 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  (*param_2)();
  _swift_getObjectType(param_1);
  __sSo24OS_dispatch_source_vnodeP8DispatchE4dataSo0a1_b1_C0CACE15FileSystemEventVvg
            ((long)puVar5 - extraout_x12);
  __sSo18OS_dispatch_sourceC8DispatchE15FileSystemEventV6deleteAEvgZ(puVar5);
  puVar3 = &DAT_100a8d350;
  FUN_100005c90(&DAT_100a8d350,puVar1,
                PTR___sSo18OS_dispatch_sourceC8DispatchE15FileSystemEventVs10SetAlgebraACMc_100995fd8
               );
  puVar4 = puVar5;
  __ss10SetAlgebraP10isSuperset2ofSbx_tFTj(puVar5,lVar2,puVar3);
  pcVar6 = *(code **)(lVar7 + 8);
  (*pcVar6)(puVar5,lVar2);
  if (((ulong)puVar4 & 1) == 0) {
    __sSo18OS_dispatch_sourceC8DispatchE15FileSystemEventV6renameAEvgZ(puVar5);
    puVar4 = puVar5;
    __ss10SetAlgebraP10isSuperset2ofSbx_tFTj(puVar5,lVar2,puVar3);
    (*pcVar6)(puVar5,lVar2);
    if (((ulong)puVar4 & 1) == 0) {
      __sSo18OS_dispatch_sourceC8DispatchE15FileSystemEventV6revokeAEvgZ(puVar5);
      puVar4 = puVar5;
      __ss10SetAlgebraP10isSuperset2ofSbx_tFTj(puVar5,lVar2,puVar3);
      (*pcVar6)(puVar5,lVar2);
      if (((ulong)puVar4 & 1) == 0) goto LAB_1003e9ed0;
    }
  }
  (*param_4)();
LAB_1003e9ed0:
  (*pcVar6)((long)puVar5 - extraout_x12,lVar2);
  return;
}

