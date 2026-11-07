// rea decompile_all
// name: FUN_1000dff54
// address: 0x1000dff54
// body: available
// range: 0x1000dff54-0x1000e012b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000dff54(undefined8 *param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long extraout_x8;
  undefined1 *puVar7;
  long lVar8;
  undefined1 auStack_90 [8];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_70;
  undefined8 uStack_68;
  
  lVar3 = 0;
  __s10Foundation3URLVMa();
  lVar8 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar8 + 0x40));
  puVar7 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_88 = 0;
  uStack_80 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x72);
  local_70 = local_88;
  uStack_68 = uStack_80;
  __sSS6appendyySSF(0x1000000000000059,0x8000000100887b40);
  puVar6 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
  puVar1 = PTR___ss5Int32VN_100995c78;
  puVar5 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
  local_88._0_4_ = param_2;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss5Int32VN_100995c78,PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar5);
  __sSS6appendyySSF(0x6e49656c6966202c,0xec0000003d786564);
  local_88 = CONCAT44(local_88._4_4_,param_3);
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar1,puVar6);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar6);
  __sSS6appendyySSF(0x3d68746170202c,0xe700000000000000);
  lVar2 = _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveFile::
          finalURL;
  _swift_beginAccess(param_4 + _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveFile
                               ::finalURL,&local_88,0,0);
  param_4 = param_4 + lVar2;
  puVar4 = puVar7;
  (**(code **)(lVar8 + 0x10))(puVar7,param_4,lVar3);
  __s10Foundation3URLV4pathSSvg();
  (**(code **)(lVar8 + 8))(puVar7,lVar3);
  __sSS6appendyySSF(puVar4,param_4);
  _swift_bridgeObjectRelease(param_4);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = local_70;
  param_1[1] = uStack_68;
  return;
}

