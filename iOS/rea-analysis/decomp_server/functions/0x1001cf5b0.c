// rea decompile_all
// name: FUN_1001cf5b0
// address: 0x1001cf5b0
// body: available
// range: 0x1001cf5b0-0x1001cf7eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void FUN_1001cf5b0(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  code *pcVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  uint uVar10;
  int iVar11;
  long extraout_x8;
  undefined8 *puVar12;
  ulong uVar13;
  long lVar14;
  long local_80;
  undefined8 auStack_78 [3];
  
  lVar6 = 0;
  __s7Network12NWConnectionC14SendCompletionOMa();
  lVar14 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar14 + 0x40));
  lVar3 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar12 = (undefined8 *)((long)&local_80 + lVar3);
  if (*(char *)(param_1 + 0x30) != '\x01') {
    return;
  }
  if ((*(byte *)(param_1 + 0x31) & 1) != 0) {
    return;
  }
  if ((*(byte *)(param_1 + 0x32) & 1) != 0) {
    return;
  }
  local_80 = lVar6;
  _swift_beginAccess(param_1 + 0x40,auStack_78,0,0);
  lVar6 = *(long *)(param_1 + 0x40);
  if (*(long *)(lVar6 + 0x10) == 0) {
    return;
  }
  lVar1 = *(long *)(lVar6 + 0x20);
  uVar2 = *(ulong *)(lVar6 + 0x28);
  *(undefined1 *)(param_1 + 0x32) = 1;
  uVar4 = (uint)(uVar2 >> 0x20);
  uVar10 = uVar4 >> 0x1e;
  if (uVar4 >> 0x1e < 2) {
    if (uVar10 == 0) {
      uVar13 = uVar2 >> 0x30 & 0xff;
      goto LAB_1001cf6a8;
    }
    iVar11 = (int)((ulong)lVar1 >> 0x20);
    if (SBORROW4(iVar11,(int)lVar1)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1001cf7ec);
      (*pcVar5)();
    }
    uVar13 = (ulong)(iVar11 - (int)lVar1);
  }
  else {
    if (uVar10 != 2) {
      uVar13 = 0;
      goto LAB_1001cf6a8;
    }
    uVar13 = *(long *)(lVar1 + 0x18) - *(long *)(lVar1 + 0x10);
    if (SBORROW8(*(long *)(lVar1 + 0x18),*(long *)(lVar1 + 0x10))) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1001cf684);
      (*pcVar5)();
    }
  }
  FUN_100008184(lVar1,uVar2);
LAB_1001cf6a8:
  puVar7 = &DAT_1009a33f8;
  _swift_allocObject(&DAT_1009a33f8,0x18,7);
  _swift_weakInit(puVar7 + 0x10);
  puVar8 = &DAT_1009a3498;
  _swift_allocObject(&DAT_1009a3498,0x18,7);
  _swift_weakInit(puVar8 + 0x10,param_1);
  puVar9 = &DAT_1009a3678;
  _swift_allocObject(&DAT_1009a3678,0x28,7);
  *(undefined **)(puVar9 + 0x10) = puVar7;
  *(undefined **)(puVar9 + 0x18) = puVar8;
  *(ulong *)(puVar9 + 0x20) = uVar13;
  *puVar12 = FUN_1001d3524;
  lVar6 = local_80;
  *(undefined **)((long)auStack_78 + lVar3) = puVar9;
  (**(code **)(lVar14 + 0x68))
            (puVar12,*(undefined4 *)
                      PTR___s7Network12NWConnectionC14SendCompletionO16contentProcessedyAEyAA7NWErrorOSgccAEmFWC_100996398
             ,local_80);
  __s7Network12NWConnectionC14ContentContextCMa(0);
  FUN_100008184(lVar1,uVar2);
  _swift_retain(puVar7);
  puVar9 = puVar8;
  _swift_retain(puVar8);
  __s7Network12NWConnectionC14ContentContextC14defaultMessageAEvgZ();
  __s7Network12NWConnectionC4send7content0D7Context10isComplete10completiony10Foundation4DataVSg_AC07ContentE0CSbAC14SendCompletionOtF
            (lVar1,uVar2,puVar9,1,puVar12);
  _swift_release(puVar9);
  FUN_100006cdc(lVar1,uVar2);
  FUN_100006cdc(lVar1,uVar2);
  (**(code **)(lVar14 + 8))(puVar12,lVar6);
  _swift_release(puVar7);
  _swift_release(puVar8);
  return;
}

