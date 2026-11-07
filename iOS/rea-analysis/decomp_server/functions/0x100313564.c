// rea decompile_all
// name: FUN_100313564
// address: 0x100313564
// body: available
// range: 0x100313564-0x100313967 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003136a8 to 0x1007df22c _swift_errorRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100313564(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  ID self;
  undefined *puVar7;
  void *aBlock;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long *unaff_x20;
  ulong uVar15;
  long lVar16;
  long lVar17;
  undefined1 auStack_110 [8];
  long local_108;
  long local_100;
  undefined1 *local_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  long local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  long local_c0;
  long local_b8;
  undefined *local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  code *local_98;
  undefined *puStack_90;
  code *local_88;
  undefined *local_80;
  
  lVar13 = *unaff_x20;
  lVar4 = 0;
  local_d0 = param_2;
  local_c8 = param_3;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar16 = *(long *)(lVar4 + -8);
  lVar10 = *(long *)(lVar16 + 0x40);
  lVar5 = 0;
  __s8Dispatch0A3QoSVMa();
  local_b8 = *(long *)(lVar5 + -8);
  lVar11 = (long)(auStack_110 + -(lVar10 + 0xfU & 0xfffffffffffffff0)) -
           (*(long *)(local_b8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(lVar13 + 0x50);
  uVar2 = *(undefined8 *)(lVar13 + 0x58);
  lVar13 = 0;
  local_c0 = lVar11;
  _swift_getAssociatedTypeWitness(0,uVar2,uVar1,0x1008f97a8,&TargetProtocolRequirement_1008f97b8);
  lVar17 = *(long *)(lVar13 + -8);
  local_e0 = *(long *)(lVar17 + 0x40);
  local_d8 = lVar11 - (local_e0 + 0xfU & 0xfffffffffffffff0);
  puVar6 = param_4;
  FUN_100316d60(param_4,uVar1,uVar2);
  if (((ulong)puVar6 & 1) != 0) {
    FUN_100315010();
    puVar7 = &DAT_1009b01b8;
    _swift_allocError(&DAT_1009b01b8,puVar6,0,0);
    *puVar6 = 1;
    FUN_100314210();
    _swift_errorRelease(puVar7);
    return;
  }
  local_108 = lVar13;
  local_f8 = auStack_110 + -(lVar10 + 0xfU & 0xfffffffffffffff0);
  local_e8 = lVar4;
  self = NSProcessInfo::processInfo((ID)&_OBJC_CLASS___NSProcessInfo,"processInfo");
  NSProcessInfo::systemUptime(self,"systemUptime");
  lVar4 = 0;
  FUN_100316ccc(0,uVar1,uVar2);
  iVar3 = *(int *)(lVar4 + 0x2c);
  uVar14 = *(ulong *)(param_4 + iVar3);
  uVar12 = uVar14;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar15 = uVar14;
  local_100 = lVar5;
  local_f0 = lVar16;
  if ((uVar12 & 1) == 0) {
    uVar15 = 0;
    FUN_100297344(0,*(long *)(uVar14 + 0x10) + 1,1,uVar14);
  }
  uVar12 = *(ulong *)(uVar15 + 0x10);
  uVar14 = uVar15;
  if (*(ulong *)(uVar15 + 0x18) >> 1 <= uVar12) {
    uVar14 = (ulong)(1 < *(ulong *)(uVar15 + 0x18));
    FUN_100297344(uVar14,uVar12 + 1,1,uVar15);
  }
  *(ulong *)(uVar14 + 0x10) = uVar12 + 1;
  *(undefined8 *)(uVar14 + uVar12 * 8 + 0x20) = param_1;
  *(ulong *)(param_4 + iVar3) = uVar14;
  iVar3 = *(int *)(lVar4 + 0x28);
  FUN_100316e44(*(undefined8 *)(param_4 + iVar3));
  lVar5 = local_d8;
  lVar4 = local_108;
  *(undefined8 *)(param_4 + iVar3) = 1;
  (**(code **)(lVar17 + 0x10))(local_d8,local_d0,local_108);
  uVar12 = (ulong)*(byte *)(lVar17 + 0x50);
  uVar15 = uVar12 + 0x28 & (uVar12 ^ 0xffffffffffffffff);
  uVar14 = local_e0 + uVar15 + 7 & 0xfffffffffffffff8;
  puVar7 = &DAT_1009b0428;
  _swift_allocObject(&DAT_1009b0428,uVar14 + 8,uVar12 | 7);
  *(undefined8 *)(puVar7 + 0x10) = uVar1;
  *(undefined8 *)(puVar7 + 0x18) = uVar2;
  *(long **)(puVar7 + 0x20) = unaff_x20;
  (**(code **)(lVar17 + 0x20))(puVar7 + uVar15,lVar5,lVar4);
  uVar1 = local_c8;
  *(undefined8 *)(puVar7 + uVar14) = local_c8;
  local_88 = FUN_100316ee8;
  local_a8 = PTR___NSConcreteStackBlock_100995490;
  local_a0 = 0x42000000;
  local_98 = FUN_1000acdb4;
  puStack_90 = &DAT_1009b0440;
  local_80 = puVar7;
  aBlock = __Block_copy(&local_a8);
  _swift_retain();
  _swift_retain(uVar1);
  lVar5 = local_c0;
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_c0);
  local_b0 = PTR___swiftEmptyArrayStorage_100995ea0;
  puVar8 = &DAT_100a82c10;
  FUN_100005c90(&DAT_100a82c10,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
  puVar7 = &DAT_100a82c18;
  FUN_100004bb4(&DAT_100a82c18,&DAT_100819000);
  puVar9 = &DAT_100a82c20;
  FUN_1000d61d8(&DAT_100a82c20,&DAT_100a82c18,&DAT_100819000);
  lVar4 = local_e8;
  puVar6 = local_f8;
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (local_f8,&local_b0,puVar7,puVar9,local_e8,puVar8);
  __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
            (0,lVar5,puVar6,aBlock);
  __Block_release(aBlock);
  (**(code **)(local_f0 + 8))(puVar6,lVar4);
  (**(code **)(local_b8 + 8))(lVar5,local_100);
  _swift_release(local_80);
  return;
}

