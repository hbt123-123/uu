// rea decompile_all
// name: FUN_1002f808c
// address: 0x1002f808c
// body: available
// range: 0x1002f808c-0x1002f8237 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002f808c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x21;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_b0 [8];
  long local_a8;
  long local_a0;
  long lStack_98;
  undefined1 *local_90;
  long lStack_88;
  undefined8 local_80;
  undefined8 local_78;
  
  lVar3 = 0;
  local_80 = param_3;
  local_78 = param_1;
  __s10Foundation3URLVMa();
  lVar8 = *(long *)(lVar3 + -8);
  uVar5 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_90 = auStack_b0 + -uVar5;
  lVar9 = (long)local_90 - uVar5;
  lVar4 = 0;
  lStack_88 = lVar3;
  __s10Foundation10URLRequestVMa();
  lVar6 = *(long *)(lVar4 + -8);
  lVar7 = lVar9 - (*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  lVar3 = *(long *)(param_2 + 0x20);
  FUN_10003f030(param_2,uVar1);
  (**(code **)(lVar3 + 8))(lVar9,uVar1,lVar3);
  lVar3 = lStack_88;
  puVar2 = local_90;
  if (unaff_x21 == 0) {
    local_a8 = lVar9;
    local_a0 = lVar6;
    lStack_98 = lVar4;
    (**(code **)(lVar8 + 0x10))(local_90,lVar9,lStack_88);
    __s10Foundation10URLRequestV3url11cachePolicy15timeoutIntervalAcA3URLV_So017NSURLRequestCacheE0VSdtcfC
              (lVar7,0x404e000000000000,puVar2,0);
    __s10Foundation10URLRequestV10httpMethodSSSgvs(local_80,param_4);
    if (param_5 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = param_5;
      FUN_1002bc258(param_5);
      _swift_bridgeObjectRelease(param_5);
    }
    uVar1 = local_78;
    lVar9 = lStack_98;
    lVar6 = local_a0;
    __s10Foundation10URLRequestV19allHTTPHeaderFieldsSDyS2SGSgvs(lVar4);
    (**(code **)(lVar8 + 8))(local_a8,lVar3);
    (**(code **)(lVar6 + 0x20))(uVar1,lVar7,lVar9);
  }
  else {
    _swift_bridgeObjectRelease(param_4);
    _swift_bridgeObjectRelease(param_5);
  }
  FUN_10003f094(param_2);
  return;
}

