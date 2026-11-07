// rea decompile_all
// name: FUN_100563b68
// address: 0x100563b68
// body: available
// range: 0x100563b68-0x100563e07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100563da8) */

void FUN_100563b68(undefined8 param_1,ulong param_2,long param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  long unaff_x21;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined *local_90;
  undefined *local_88 [3];
  undefined8 local_70;
  long lStack_68;
  
  uVar8 = 1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f);
  uVar10 = 0xffffffffffffffff;
  if ((long)uVar8 < 0x40) {
    uVar10 = ~(-1L << (uVar8 & 0x3f));
  }
  uVar10 = uVar10 & *(ulong *)(param_4 + 0x40);
  uVar7 = param_2;
  _swift_bridgeObjectRetain(param_4);
  lVar11 = 0;
  local_90 = PTR___swiftEmptyArrayStorage_100995ea0;
  while( true ) {
    while (uVar10 != 0) {
      uVar2 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
      uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 - 1 & uVar10;
      lVar9 = *(long *)(*(long *)(param_4 + 0x30) +
                       (lVar11 << 9 | LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) << 3));
      if (((long)param_2 <= lVar9) && (lVar9 < param_3)) {
        puVar6 = local_90;
        _swift_isUniquelyReferenced_nonNull_native();
        local_88[0] = local_90;
        if (((ulong)puVar6 & 1) == 0) {
          uVar7 = *(long *)(local_90 + 0x10) + 1;
          FUN_1005115a8(0,uVar7,1);
        }
        uVar1 = *(ulong *)(local_88[0] + 0x10);
        uVar2 = uVar1 + 1;
        if (*(ulong *)(local_88[0] + 0x18) >> 1 <= uVar1) {
          uVar7 = uVar2;
          FUN_1005115a8(1 < *(ulong *)(local_88[0] + 0x18),uVar2,1);
        }
        *(ulong *)(local_88[0] + 0x10) = uVar2;
        *(long *)(local_88[0] + uVar1 * 8 + 0x20) = lVar9;
        local_90 = local_88[0];
      }
    }
    bVar5 = SCARRY8(lVar11,1);
    lVar11 = lVar11 + 1;
    if (bVar5) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100563de8);
      (*pcVar4)();
    }
    if ((long)(uVar8 + 0x3f >> 6) <= lVar11) break;
    uVar10 = ((ulong *)(param_4 + 0x40))[lVar11];
  }
  _swift_release(param_4);
  local_88[0] = local_90;
  _swift_bridgeObjectRetain();
  FUN_100510ea0(local_88);
  puVar6 = local_88[0];
  if (unaff_x21 != 0) {
    _swift_errorRelease(unaff_x21);
    _swift_release(local_88[0]);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100563e08);
    (*pcVar4)();
  }
  uVar10 = *(ulong *)(local_88[0] + 0x10);
  if (uVar10 != 0) {
    uVar8 = 0;
    do {
      if (*(ulong *)(puVar6 + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100563dec);
        (*pcVar4)();
      }
      if (*(long *)(param_4 + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100563df0);
        (*pcVar4)();
      }
      lVar11 = *(long *)(puVar6 + uVar8 * 8 + 0x20);
      FUN_1003618e4(lVar11);
      if ((uVar7 & 1) == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100563df4);
        (*pcVar4)();
      }
      FUN_1000b142c(*(long *)(param_4 + 0x38) + lVar11 * 0x28,local_88);
      lVar11 = lStack_68;
      uVar3 = local_70;
      FUN_10003f030(local_88,local_70);
      uVar7 = 0;
      (**(code **)(lVar11 + 0x30))(param_1,&DAT_1009d06b8,&PTR_PTR_1009d06d8,uVar3,lVar11);
      uVar8 = uVar8 + 1;
      FUN_10003f094(local_88);
    } while (uVar10 != uVar8);
  }
  _swift_release(local_90);
  _swift_release(puVar6);
  return;
}

