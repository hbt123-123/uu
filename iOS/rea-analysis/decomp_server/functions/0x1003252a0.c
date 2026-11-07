// rea decompile_all
// name: FUN_1003252a0
// address: 0x1003252a0
// body: available
// range: 0x1003252a0-0x1003255cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003252a0(long param_1,undefined1 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  code *pcVar8;
  long lVar9;
  long lVar10;
  undefined1 *puVar11;
  long lVar12;
  ulong uVar13;
  undefined1 auStack_a0 [8];
  long local_98;
  long local_90;
  undefined *local_88;
  long local_80;
  undefined *local_78;
  long local_70;
  undefined1 *local_68;
  
  puVar2 = &DAT_100a85c98;
  FUN_100004bb4(&DAT_100a85c98,&DAT_10081a330);
  local_80 = *(long *)(puVar2 + -8);
  puVar11 = auStack_a0 + -(*(long *)(local_80 + 0x40) + 0xfU & 0xfffffffffffffff0);
  pcVar8 = *(code **)(local_80 + 0x10);
  (*pcVar8)(puVar11,param_3,puVar2);
  puVar3 = &DAT_1009b14d0;
  _swift_allocObject(&DAT_1009b14d0,0x20,7);
  puVar3[0x10] = param_2;
  *(long *)(puVar3 + 0x18) = param_4;
  local_78 = puVar2;
  local_68 = puVar11;
  (*pcVar8)(param_1,puVar11,puVar2);
  puVar2 = &DAT_100a85ca0;
  FUN_100004bb4(&DAT_100a85ca0,&DAT_10081a338);
  iVar1 = *(int *)(puVar2 + 0x1c);
  *(undefined8 *)(param_1 + iVar1) = FUN_10032af04;
  ((undefined8 *)(param_1 + iVar1))[1] = puVar3;
  puVar4 = &DAT_100a85ca8;
  FUN_100004bb4(&DAT_100a85ca8,&DAT_10081a340);
  local_70 = *(long *)(puVar4 + -8);
  lVar6 = (long)puVar11 - (*(long *)(local_70 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_100a85cb0;
  local_88 = puVar4;
  FUN_100004bb4(&DAT_100a85cb0,&DAT_10081a348);
  lVar10 = *(long *)(puVar5 + -8);
  lVar9 = *(long *)(lVar10 + 0x40);
  lVar12 = lVar6 - (lVar9 + 0xfU & 0xfffffffffffffff0);
  uVar7 = 0;
  __ss042_stdlib_isOSVersionAtLeastOrVariantVersiondE0yBi1_Bw_BwBwBwBwBwtF(0xe,0,0,0x11,0,0);
  if ((uVar7 & 1) == 0) {
    _swift_retain_n(param_4,2);
    _swift_retain(puVar3);
    FUN_100329af4(lVar6,lVar12,local_68);
  }
  else {
    puVar4 = &DAT_100a83400;
    FUN_100004bb4(&DAT_100a83400,&DAT_1008178f0);
    _swift_retain_n(param_4,2);
    _swift_retain(puVar3);
    __sScS10makeStream2of15bufferingPolicyScSyxG6stream_ScS12ContinuationVyx_G12continuationtxm_AG09BufferingE0Oyx__GtFZ
              (lVar6,lVar12,puVar4,local_68,puVar4);
  }
  puVar4 = local_88;
  local_90 = lVar6;
  (**(code **)(local_70 + 0x10))(param_1 + *(int *)(puVar2 + 0x20),lVar6,local_88);
  pcVar8 = *(code **)(lVar10 + 0x10);
  (*pcVar8)(param_1 + *(int *)(puVar2 + 0x24),lVar12,puVar5);
  lVar6 = lVar12 - (lVar9 + 0xfU & 0xfffffffffffffff0);
  local_98 = lVar12;
  (*pcVar8)(lVar6,lVar12,puVar5);
  uVar7 = (ulong)*(byte *)(lVar10 + 0x50);
  uVar13 = uVar7 + 0x10 & (uVar7 ^ 0xffffffffffffffff);
  puVar2 = &DAT_1009b14f8;
  _swift_allocObject(&DAT_1009b14f8,uVar13 + lVar9,uVar7 | 7);
  (**(code **)(lVar10 + 0x20))(puVar2 + uVar13,lVar6,puVar5);
  lVar6 = param_4 + _TtC9Alamofire7Request::id;
  FUN_10032af40(lVar6);
  FUN_100293328();
  _swift_release(puVar3);
  _swift_release(param_4);
  _swift_release(puVar2);
  _swift_release(lVar6);
  (**(code **)(lVar10 + 8))(lVar12,puVar5);
  (**(code **)(local_70 + 8))(local_90,puVar4);
  (**(code **)(local_80 + 8))(local_68,local_78);
  return;
}

