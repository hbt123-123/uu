// rea decompile_all
// name: FUN_100327194
// address: 0x100327194
// body: available
// range: 0x100327194-0x1003274bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100327194(long param_1,undefined1 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  code *pcVar9;
  long lVar10;
  long lVar11;
  undefined1 *puVar12;
  long lVar13;
  ulong uVar14;
  undefined1 auStack_a0 [8];
  long local_98;
  long local_90;
  undefined *local_88;
  long local_80;
  undefined *local_78;
  long local_70;
  undefined1 *local_68;
  
  puVar2 = &DAT_100a85cf8;
  FUN_100004bb4(&DAT_100a85cf8,&DAT_10081a3a0);
  local_80 = *(long *)(puVar2 + -8);
  puVar12 = auStack_a0 + -(*(long *)(local_80 + 0x40) + 0xfU & 0xfffffffffffffff0);
  pcVar9 = *(code **)(local_80 + 0x10);
  (*pcVar9)(puVar12,param_3,puVar2);
  puVar3 = &DAT_1009b1688;
  _swift_allocObject(&DAT_1009b1688,0x20,7);
  puVar3[0x10] = param_2;
  *(long *)(puVar3 + 0x18) = param_4;
  local_78 = puVar2;
  local_68 = puVar12;
  (*pcVar9)(param_1,puVar12,puVar2);
  puVar2 = &DAT_100a85d00;
  FUN_100004bb4(&DAT_100a85d00,&DAT_10081a3a8);
  iVar1 = *(int *)(puVar2 + 0x1c);
  *(undefined8 *)(param_1 + iVar1) = thunk_FUN_10032b408;
  ((undefined8 *)(param_1 + iVar1))[1] = puVar3;
  puVar4 = &DAT_100a85d08;
  FUN_100004bb4(&DAT_100a85d08,&DAT_10081a3b0);
  local_70 = *(long *)(puVar4 + -8);
  lVar7 = (long)puVar12 - (*(long *)(local_70 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_100a85d10;
  local_88 = puVar4;
  FUN_100004bb4(&DAT_100a85d10,&DAT_10081a3b8);
  lVar11 = *(long *)(puVar5 + -8);
  lVar10 = *(long *)(lVar11 + 0x40);
  lVar13 = lVar7 - (lVar10 + 0xfU & 0xfffffffffffffff0);
  uVar8 = 0;
  __ss042_stdlib_isOSVersionAtLeastOrVariantVersiondE0yBi1_Bw_BwBwBwBwBwtF(0xe,0,0,0x11,0,0);
  if ((uVar8 & 1) == 0) {
    _swift_retain_n(param_4,2);
    _swift_retain(puVar3);
    FUN_10032a0d0(lVar7,lVar13,local_68);
  }
  else {
    uVar6 = 0;
    __sSo25NSURLSessionWebSocketTaskC10FoundationE7MessageOMa(0);
    _swift_retain_n(param_4,2);
    _swift_retain(puVar3);
    __sScS10makeStream2of15bufferingPolicyScSyxG6stream_ScS12ContinuationVyx_G12continuationtxm_AG09BufferingE0Oyx__GtFZ
              (lVar7,lVar13,uVar6,local_68,uVar6);
  }
  puVar4 = local_88;
  local_90 = lVar7;
  (**(code **)(local_70 + 0x10))(param_1 + *(int *)(puVar2 + 0x20),lVar7,local_88);
  pcVar9 = *(code **)(lVar11 + 0x10);
  (*pcVar9)(param_1 + *(int *)(puVar2 + 0x24),lVar13,puVar5);
  lVar7 = lVar13 - (lVar10 + 0xfU & 0xfffffffffffffff0);
  local_98 = lVar13;
  (*pcVar9)(lVar7,lVar13,puVar5);
  uVar8 = (ulong)*(byte *)(lVar11 + 0x50);
  uVar14 = uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff);
  puVar2 = &DAT_1009b16b0;
  _swift_allocObject(&DAT_1009b16b0,uVar14 + lVar10,uVar8 | 7);
  *(code **)(puVar2 + 0x10) = FUN_1003274c0;
  *(undefined8 *)(puVar2 + 0x18) = 0;
  (**(code **)(lVar11 + 0x20))(puVar2 + uVar14,lVar7,puVar5);
  lVar7 = param_4 + _TtC9Alamofire7Request::id;
  FUN_10032af40(lVar7);
  FUN_1002fe0d8();
  _swift_release(puVar3);
  _swift_release(param_4);
  _swift_release(puVar2);
  _swift_release(lVar7);
  (**(code **)(lVar11 + 8))(lVar13,puVar5);
  (**(code **)(local_70 + 8))(local_90,puVar4);
  (**(code **)(local_80 + 8))(local_68,local_78);
  return;
}

