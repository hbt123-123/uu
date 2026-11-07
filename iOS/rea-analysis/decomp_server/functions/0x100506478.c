// rea decompile_all
// name: FUN_100506478
// address: 0x100506478
// body: available
// range: 0x100506478-0x10050668b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_100506478(long param_1,ID param_2,undefined8 param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined *puVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  byte *pbVar10;
  byte *pbVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long unaff_x21;
  long local_48;
  
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  FUN_10003f030(param_1,uVar2);
  puVar5 = &DAT_100aaa108;
  FUN_100004bb4(&DAT_100aaa108,&DAT_1008358d0);
  FUN_100537580(&local_48,param_3,0,uVar2,puVar5,uVar3,&PTR_PTR_1009d1680);
  if (unaff_x21 != 0) {
    return;
  }
  lVar15 = *(long *)(local_48 + 0x10);
  lVar6 = lVar15;
  FUN_100563164();
  puVar9 = (undefined1 *)(lVar6 + lVar15);
  if (SCARRY8(lVar6,lVar15)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100506688);
    (*pcVar4)();
  }
  if ((long)puVar9 < 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10050668c);
    (*pcVar4)();
  }
  puVar7 = PTR___swiftEmptyArrayStorage_100995ea0;
  if (puVar9 != (undefined1 *)0x0) {
    puVar7 = puVar9;
    __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ
              (puVar9,PTR___ss5UInt8VN_100995d40);
    *(undefined1 **)(puVar7 + 0x10) = puVar9;
    _bzero(puVar7 + 0x20,(size_t)puVar9);
  }
  pbVar1 = puVar7 + 0x20;
  uVar12 = *(ulong *)(local_48 + 0x10);
  pbVar10 = pbVar1;
  pbVar11 = pbVar1;
  uVar13 = uVar12;
  if (0x7f < uVar12) {
    do {
      pbVar11 = pbVar10 + 1;
      *pbVar10 = (byte)uVar12 | 0x80;
      uVar13 = uVar12 >> 7;
      uVar14 = uVar12 >> 0xe;
      pbVar10 = pbVar11;
      uVar12 = uVar13;
    } while (uVar14 != 0);
  }
  *pbVar11 = (byte)uVar13;
  if (*(size_t *)(local_48 + 0x10) != 0) {
    _memmove(pbVar11 + 1,(void *)(local_48 + 0x20),*(size_t *)(local_48 + 0x10));
  }
  _swift_bridgeObjectRelease(local_48);
  if (*(long *)(puVar7 + 0x10) == 0) {
    _swift_bridgeObjectRelease();
    if (puVar9 == (undefined1 *)0x0) {
      return;
    }
  }
  else {
    puVar8 = (undefined1 *)_objc_msgSend(param_2,"write:maxLength:",pbVar1,puVar9);
    _swift_bridgeObjectRelease();
    if (puVar8 == puVar9) {
      return;
    }
    if (puVar8 == (undefined1 *)0xffffffffffffffff) {
      puVar9 = (undefined1 *)_objc_msgSend(param_2,"streamError");
      if (puVar9 == (undefined1 *)0x0) {
        FUN_1004faf70();
        _swift_allocError(&DAT_1009ce0a8,puVar9,0,0);
        *puVar9 = 0;
      }
      goto LAB_100506638;
    }
  }
  FUN_1004faf70();
  _swift_allocError(&DAT_1009ce0a8,puVar7,0,0);
  *puVar7 = 1;
LAB_100506638:
  _swift_willThrow();
  return;
}

