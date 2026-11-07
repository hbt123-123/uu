// rea decompile_all
// name: FUN_100052918
// address: 0x100052918
// body: available
// range: 0x100052918-0x100052bab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100052918(long param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                  long param_6,code *param_7,undefined8 param_8)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  long lVar7;
  ulong uVar8;
  long unaff_x20;
  undefined8 local_168 [16];
  undefined1 auStack_e8 [24];
  long local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  
  if ((*(long *)(unaff_x20 + 0xb8) != param_6) || (*(long *)(param_1 + 0x10) <= param_2)) {
    (*param_7)(param_4,param_5);
    return;
  }
  if (param_2 < 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100052ba4);
    (*pcVar4)();
  }
  lVar7 = param_1 + param_2 * 0x58;
  uStack_a8 = *(undefined8 *)(lVar7 + 0x48);
  local_b0 = *(undefined8 *)(lVar7 + 0x40);
  uStack_98 = *(undefined8 *)(lVar7 + 0x58);
  uStack_a0 = *(undefined8 *)(lVar7 + 0x50);
  uStack_88 = *(undefined8 *)(lVar7 + 0x68);
  local_90 = *(undefined8 *)(lVar7 + 0x60);
  local_80 = *(undefined8 *)(lVar7 + 0x70);
  uStack_c8 = *(undefined8 *)(lVar7 + 0x28);
  local_d0 = *(long *)(lVar7 + 0x20);
  local_b8 = *(undefined8 *)(lVar7 + 0x38);
  uStack_c0 = *(undefined8 *)(lVar7 + 0x30);
  puVar6 = auStack_e8;
  _swift_beginAccess(unaff_x20 + 0x70,puVar6,0,0);
  lVar7 = local_d0;
  uVar8 = *(ulong *)(*(long *)(unaff_x20 + 0x70) + 0x10);
  if (uVar8 < 3) {
    lVar2 = param_3 + *(long *)(param_4 + 0x10);
    if (SCARRY8(param_3,*(long *)(param_4 + 0x10))) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100052ba8);
      (*pcVar4)();
    }
    if (SCARRY8(lVar2,1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100052bac);
      (*pcVar4)();
    }
    if (local_d0 - 4U < 0xfffffffffffffffd) goto LAB_100052a48;
    bVar1 = lVar2 + 1 < 6;
    if (uVar8 != 0) goto LAB_100052a24;
  }
  else {
    if (local_d0 - 4U < 0xfffffffffffffffd) goto LAB_100052a48;
    bVar1 = false;
LAB_100052a24:
    thunk_FUN_1001a2e54(local_d0);
    if (((ulong)puVar6 & 1) != 0) goto LAB_100052a48;
  }
  if (bVar1) {
    uVar8 = 1;
    FUN_1000457e0(local_b8,local_b0);
    if ((uVar8 & 1) == 0) {
      puVar5 = &DAT_1009985d0;
      _swift_allocObject(&DAT_1009985d0,0x18,7);
      _swift_weakInit(puVar5 + 0x10,unaff_x20);
      FUN_10004985c(&local_d0,local_168);
      _swift_bridgeObjectRetain(param_1);
      _swift_bridgeObjectRetain(param_4);
      _swift_bridgeObjectRetain(param_5);
      _swift_retain(param_8);
      FUN_10007f3e4(&local_d0,PTR___swiftEmptyArrayStorage_100995ea0,param_6,unaff_x20,puVar5,
                    param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,&local_d0);
      _swift_release(puVar5);
      _swift_bridgeObjectRelease(param_1);
      _swift_bridgeObjectRelease(param_4);
      _swift_bridgeObjectRelease(param_5);
      _swift_release(param_8);
      FUN_10007ef48(&local_d0);
      return;
    }
  }
LAB_100052a48:
  puVar5 = &DAT_100a75970;
  FUN_100004bb4(&DAT_100a75970,&DAT_10080a9c0);
  _swift_initStackObject();
  *(undefined8 *)(puVar5 + 0x18) = 2;
  *(undefined8 *)(puVar5 + 0x10) = 1;
  *(long *)(puVar5 + 0x20) = lVar7;
  local_168[0] = param_5;
  _swift_bridgeObjectRetain(param_5);
  FUN_10005f748(puVar5);
  uVar3 = local_168[0];
  FUN_100052918(param_1,param_2 + 1,param_3,param_4,local_168[0],param_6,param_7,param_8);
  _swift_bridgeObjectRelease(uVar3);
  return;
}

