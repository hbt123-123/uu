// rea decompile_all
// name: FUN_10035b994
// address: 0x10035b994
// body: available
// range: 0x10035b994-0x10035bbdb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_10035b994(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  code *pcVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  long alStack_b0 [6];
  undefined8 auStack_80 [4];
  
  lVar3 = 0;
  auStack_80[1] = param_2;
  __s10Foundation3URLVMa();
  lVar12 = *(long *)(lVar3 + -8);
  lVar13 = (long)auStack_80 - (*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  __s10Foundation10URLRequestVMa();
  lVar15 = *(long *)(lVar4 + -8);
  lVar11 = lVar13 - (*(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  FUN_10035c064();
  puVar14 = (undefined8 *)
            (lVar11 - (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0));
  FUN_10035c9c8();
  puVar6 = puVar14;
  _swift_getEnumCaseMultiPayload(puVar14,lVar5);
  if ((int)puVar6 == 1) {
    puVar8 = &DAT_100a887b0;
    FUN_100004bb4(&DAT_100a887b0,&DAT_10081c968);
    iVar2 = *(int *)(puVar8 + 0x30);
    (**(code **)(lVar12 + 0x20))(lVar13,puVar14,lVar3);
    (**(code **)(lVar15 + 0x20))(lVar11,(long)puVar14 + (long)iVar2,lVar4);
    puVar14[-4] = param_1;
    puVar14[-3] = lVar11;
    puVar14[-2] = lVar13;
    uVar7 = 0;
    FUN_10004003c(0,&DAT_100a88888,&PTR__OBJC_CLASS___NSURLSessionUploadTask_100a65a60);
    __sSo17OS_dispatch_queueC8DispatchE4sync7executexxyKXE_tKlF
              (auStack_80 + 3,FUN_10035ca0c,puVar14 + -6,uVar7);
    (**(code **)(lVar15 + 8))(lVar11,lVar4);
    pcVar10 = *(code **)(lVar12 + 8);
    lVar11 = lVar13;
    lVar4 = lVar3;
    uVar7 = auStack_80[3];
  }
  else {
    uVar7 = *puVar14;
    uVar1 = puVar14[1];
    puVar8 = &DAT_100a887a8;
    FUN_100004bb4(&DAT_100a887a8,&DAT_10081c960);
    (**(code **)(lVar15 + 0x20))(lVar11,(long)puVar14 + (long)*(int *)(puVar8 + 0x30),lVar4);
    puVar14[-4] = param_1;
    puVar14[-3] = lVar11;
    puVar14[-2] = uVar7;
    puVar14[-1] = uVar1;
    uVar9 = 0;
    FUN_10004003c(0,&DAT_100a88888,&PTR__OBJC_CLASS___NSURLSessionUploadTask_100a65a60);
    __sSo17OS_dispatch_queueC8DispatchE4sync7executexxyKXE_tKlF
              (auStack_80 + 3,FUN_10035ca28,puVar14 + -6,uVar9);
    FUN_100006cdc(uVar7,uVar1);
    pcVar10 = *(code **)(lVar15 + 8);
    uVar7 = auStack_80[3];
  }
  (*pcVar10)(lVar11,lVar4);
  return uVar7;
}

