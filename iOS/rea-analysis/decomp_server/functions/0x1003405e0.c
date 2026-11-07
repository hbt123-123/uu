// rea decompile_all
// name: FUN_1003405e0
// address: 0x1003405e0
// body: available
// range: 0x1003405e0-0x1003409c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001003407fc) */

void FUN_1003405e0(undefined8 param_1,code *param_2,undefined8 param_3,undefined4 param_4,
                  code *param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  code *pcVar11;
  undefined1 *puVar12;
  long lVar13;
  undefined *local_a0 [3];
  long local_88;
  char *local_80;
  long local_78;
  undefined *local_70;
  
  local_80 = (char *)CONCAT44(local_80._4_4_,param_4);
  lVar1 = 0;
  __s10Foundation10URLRequestVMa();
  lVar13 = *(long *)(lVar1 + -8);
  lVar9 = (long)local_a0 - (*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_100a84680;
  puVar6 = &DAT_100818f90;
  local_78 = lVar9;
  FUN_100004bb4();
  puVar10 = (undefined8 *)
            (lVar9 - (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0));
  puVar3 = puVar2;
  __s10Foundation10URLRequestV8httpBodyAA4DataVSgvg();
  if ((ulong)puVar6 >> 0x3c < 0xf) {
    puVar4 = puVar3;
    local_a0[2] = (undefined *)param_3;
    local_88 = lVar13;
    (*param_5)();
    if (((ulong)puVar4 & 1) == 0) {
      (**(code **)(local_88 + 0x10))(puVar10,param_1,lVar1);
      _swift_storeEnumTagMultiPayload(puVar10,puVar2,0);
      (*param_2)(puVar10);
    }
    else {
      local_a0[0] = puVar6;
      local_a0[1] = puVar3;
      __s10Foundation10URLRequestV19allHTTPHeaderFieldsSDyS2SGSgvg();
      puVar6 = PTR___swiftEmptyArrayStorage_100995ea0;
      if (puVar4 != (undefined *)0x0) {
        local_70 = PTR___swiftEmptyArrayStorage_100995ea0;
        FUN_1002bb634();
        _swift_bridgeObjectRelease(puVar4);
        puVar6 = local_70;
      }
      uVar7 = 0;
      puVar5 = &DAT_d000000000000010;
      FUN_1002bbc2c(&DAT_d000000000000010,0x80000001008a98d0,puVar6);
      if ((uVar7 & 1) != 0) {
        _swift_bridgeObjectRelease(puVar6);
LAB_1003407c4:
        lVar9 = local_78;
        local_80 = "Content-Disposition";
        pcVar11 = *(code **)(local_88 + 0x10);
        (*pcVar11)(local_78,param_1,lVar1);
        puVar6 = local_a0[1];
        FUN_100340450(local_a0[1],local_a0[0]);
        __s10Foundation10URLRequestV8httpBodyAA4DataVSgvs();
        __s10Foundation10URLRequestV19allHTTPHeaderFieldsSDyS2SGSgvg();
        local_70 = PTR___swiftEmptyArrayStorage_100995ea0;
        if (puVar6 != (undefined *)0x0) {
          FUN_1002bb634();
          _swift_bridgeObjectRelease(puVar6);
        }
        FUN_1002bba74(&DAT_d000000000000010,(ulong)local_80 | 0x8000000000000000,0x6574616c666564,
                      0xe700000000000000);
        puVar6 = local_70;
        puVar3 = local_70;
        FUN_1002bc258(local_70);
        _swift_bridgeObjectRelease(puVar6);
        __s10Foundation10URLRequestV19allHTTPHeaderFieldsSDyS2SGSgvs(puVar3);
        (*pcVar11)(puVar10,lVar9,lVar1);
        _swift_storeEnumTagMultiPayload(puVar10,puVar2,0);
        (*param_2)(puVar10);
        FUN_100006cc8(local_a0[1],local_a0[0]);
        FUN_100315050(puVar10);
        (**(code **)(local_88 + 8))(lVar9,lVar1);
        return;
      }
      if ((long)puVar5 < 0) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x1003409c4);
        (*pcVar11)();
      }
      puVar12 = *(undefined1 **)(puVar6 + 0x10);
      _swift_bridgeObjectRelease(puVar6);
      if (puVar12 <= puVar5) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x1003409c8);
        (*pcVar11)();
      }
      if (((ulong)local_80 & 0xff) == 0) {
        FUN_100340b44();
        puVar3 = &DAT_1009b34c8;
        _swift_allocError(&DAT_1009b34c8,puVar6,0,0);
        *puVar10 = puVar3;
        uVar8 = 1;
      }
      else {
        if (((uint)local_80 & 0xff) == 1) goto LAB_1003407c4;
        (**(code **)(local_88 + 0x10))(puVar10,param_1,lVar1);
        uVar8 = 0;
      }
      _swift_storeEnumTagMultiPayload(puVar10,puVar2,uVar8);
      (*param_2)(puVar10);
      puVar3 = local_a0[1];
      puVar6 = local_a0[0];
    }
    FUN_100006cc8(puVar3,puVar6);
  }
  else {
    (**(code **)(lVar13 + 0x10))(puVar10,param_1,lVar1);
    _swift_storeEnumTagMultiPayload(puVar10,puVar2,0);
    (*param_2)(puVar10);
  }
  FUN_100315050(puVar10);
  return;
}

